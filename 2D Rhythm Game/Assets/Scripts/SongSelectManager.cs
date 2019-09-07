﻿using System.Collections;
using System.Collections.Generic;
using System.IO;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using Firebase;
using Firebase.Database;
using Firebase.Unity.Editor;
using System;
using UnityEngine.Purchasing;
using UnityEngine.Purchasing.Security;
using UnityEngine.Analytics;


public class SongSelectManager : MonoBehaviour, IStoreListener
{
    public Text startUI;
    public Text disableAlertUI;
    public Image disablePanelUI;
    public Button purchaseButtonUI;
    private bool disabled = true;

    public Image musicImageUI;
    public Text musicTitleUI;
    public Text bpmUI;

    private int musicIndex;
    private int musicCount = 3;

    // 회원가입 결과 UI
    public Text userUI;

    // 인 앱 결제 관련 변수
    private string prodectID = "music_3";
    private IStoreController controller; // 인 앱 결제를 위한 컨트롤러 객체

    private void UpdateSong(int musicIndex)
    {
        // 곡을 바꾸면 플레이 할 수 없게 막음
        disabled = true;
        disablePanelUI.gameObject.SetActive(true);
        disableAlertUI.text = "Loading...";
        purchaseButtonUI.gameObject.SetActive(false);
        startUI.gameObject.SetActive(false);
        AudioSource audioSource = GetComponent<AudioSource>();
        audioSource.Stop();
        // 리소스에서 비트 텍스트파일 호출
        TextAsset textAsset = textAssets[musicIndex - 1];
        StringReader stringReader = new StringReader(textAsset.text);
        // 첫번째 줄에 적힌 곡 이름을 읽어서 UI 업데이트
        musicTitleUI.text = stringReader.ReadLine();
        // 두번째 줄은 읽기만
        stringReader.ReadLine();
        // 셋째 줄 BPM 읽어서 UI 업데이트
        bpmUI.text = "BPM : " + stringReader.ReadLine().Split(' ')[0];
        // 리소스에서 비트 음악파일 호출 후 재생
        AudioClip audioClip = audioClips[musicIndex - 1];
        audioSource.clip = audioClip;
        audioSource.Play();
        // 리소스에서 비트 이미지 파일 호출
        musicImageUI.sprite = sprites[musicIndex - 1];
        // 파이어베이스 접근
        DatabaseReference reference;
        FirebaseApp.DefaultInstance.SetEditorDatabaseUrl("https://unity-rhythm-game-tutori-1f7bf.firebaseio.com/");
        reference = FirebaseDatabase.DefaultInstance.GetReference("charges").Child(musicIndex.ToString());
        // 데이터 셋의 모든 데이터를 JSON 형태로 가져옴
        reference.GetValueAsync().ContinueWith(task =>
        {
            // 데이터 가져오기 성공
            if (task.IsCompleted)
            {
                DataSnapshot snapshot = task.Result;
                // 무료곡
                if (snapshot == null || !snapshot.Exists)
                {
                    disabled = false;
                    disablePanelUI.gameObject.SetActive(false);
                    disableAlertUI.text = "";
                    startUI.gameObject.SetActive(true);
                }
                else
                {
                    // 구매 이력이 있는 경우 플레이 가능
                    if (snapshot.Child(PlayerInformation.auth.CurrentUser.UserId).Exists)
                    {
                        disabled = false;
                        disablePanelUI.gameObject.SetActive(false);
                        disableAlertUI.text = "";
                        startUI.gameObject.SetActive(true);
                        purchaseButtonUI.gameObject.SetActive(false);
                    }
                    // 구매 확인
                    if (disabled)
                    {
                        purchaseButtonUI.gameObject.SetActive(true);
                        disableAlertUI.text = "플레이 할 수 없는 곡입니다.";
                        startUI.gameObject.SetActive(false);
                    }
                }
            }

        });
    }

    // 구매 정보 담는 charge 클래스
    class Charge
    {
        public double timestamp;
        public Charge(double timestmap)
        {
#pragma warning disable CS1717 // 같은 변수에 할당했습니다.
            this.timestamp = timestamp;
#pragma warning restore CS1717 // 같은 변수에 할당했습니다.
        }
    }

    public void Purchase()
    {
        if (controller == null)
        {
            Debug.Log("결제 모듈이 초기화되지 않았습니다.");
        }
        else
        {
            controller.InitiatePurchase(prodectID);
        }
    }

    public void Right()
    {
        musicIndex = musicIndex + 1;
        if (musicIndex > musicCount) musicIndex = 1;
        UpdateSong(musicIndex);
    }

    public void Left()
    {
        musicIndex = musicIndex - 1;
        if (musicIndex < 1) musicIndex = musicCount;
        UpdateSong(musicIndex);
    }

    Sprite[] sprites;
    AudioClip[] audioClips;
    TextAsset[] textAssets;

    void Start()
    {
        sprites = new Sprite[musicCount];
        audioClips = new AudioClip[musicCount];
        textAssets = new TextAsset[musicCount];
        // 미리 각 곡의 정보를 읽음
        for (int i = 1; i <= musicCount; i++)
        {
            sprites[i - 1] = Resources.Load<Sprite>("Beats/" + i.ToString());
            audioClips[i - 1] = Resources.Load<AudioClip>("Beats/" + i.ToString());
            textAssets[i - 1] = Resources.Load<TextAsset>("Beats/" + i.ToString());
        }
        userUI.text = PlayerInformation.auth.CurrentUser.Email + " 님 환영합니다!";
        musicIndex = 1;
        UpdateSong(musicIndex);
        InitStore(); // 인 앱 결제 모듈 초기화
    }

    public void GameStart()
    {
        if (disabled) return;
        PlayerInformation.selectedMusic = musicIndex.ToString();
        SceneManager.LoadScene("GameScene");
    }

    public void LogOut()
    {
        PlayerInformation.auth.SignOut();
        SceneManager.LoadScene("LoginScene");
    }

    void InitStore()
    {
        // 환경설정 객체 선언
        ConfigurationBuilder builder = ConfigurationBuilder.Instance(StandardPurchasingModule.Instance());
        // 설정한 상품 ID를 인 앱 결제 상품으로 등록
        builder.AddProduct(prodectID, ProductType.Consumable, new IDs { { prodectID, GooglePlay.Name } });
        UnityPurchasing.Initialize(this, builder);
    }

    public void OnInitializeFailed(InitializationFailureReason error)
    {
        Debug.Log("결제 모듈 초기화에 실패했습니다.");
    }

    public PurchaseProcessingResult ProcessPurchase(PurchaseEventArgs e)
    {
        bool success = true;
        // 아래 소스코드는 안드로이드에서 실행했을 때만 정상적으로 동작
        CrossPlatformValidator validator = new CrossPlatformValidator(GooglePlayTangle.Data(), AppleTangle.Data(), Application.identifier);
        try
        {
            // 앱 상에서 구매한 물품에 대해 결제 처리
            IPurchaseReceipt[] result = validator.Validate(e.purchasedProduct.receipt);
            for (int i = 0; i < result.Length; i++)
            {
                Analytics.Transaction(prodectID, e.purchasedProduct.metadata.localizedPrice, e.purchasedProduct.metadata.isoCurrencyCode);
            }
        }
        catch (IAPSecurityException ex)
        {
            // 유니티 에디터에서 실행하는 경우 오류 발생
            Debug.Log("오류 발생 : " + ex.Message);
            success = false;
        }
        if (success)
        {
            Debug.Log("결제 완료");
            // 데이터베이스 접속 설정
            DatabaseReference reference = PlayerInformation.GetDatabaseReference();
            // 삽입할 데이터 준비
            DateTime now = DateTime.Now.ToLocalTime();
            TimeSpan span = (now - new DateTime(1970, 1, 1, 0, 0, 0, 0).ToLocalTime());
            int timestamp = (int)span.TotalSeconds;
            Charge charge = new Charge(timestamp);
            string json = JsonUtility.ToJson(charge);
            // 랭킹 점수 데이터 삽입
            reference.Child("charges").Child(musicIndex.ToString()).Child(PlayerInformation.auth.CurrentUser.UserId).SetRawJsonValueAsync(json);
            UpdateSong(musicIndex);
        }
        else
        {
            Debug.Log("결제 실패");
        }
        return PurchaseProcessingResult.Complete;
    }

    public void OnPurchaseFailed(Product i, PurchaseFailureReason p)
    {
        if (!p.Equals(PurchaseFailureReason.UserCancelled))
        {
            Debug.Log("결제 모듈 동작에 실패했습니다.");
        }
        else
        {
            Debug.Log("사용자가 결제를 취소했습니다.");
        }
    }

    public void OnInitialized(IStoreController controller, IExtensionProvider extensions)
    {
        this.controller = controller;
        Debug.Log("결제 모듈 초기화가 완료되었습니다.");
    }
}