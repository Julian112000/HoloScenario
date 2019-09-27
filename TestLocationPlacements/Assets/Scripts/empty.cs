using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class empty : MonoBehaviour
{
    [SerializeField]
    private Text emptytext;
    [SerializeField]
    private string message;

    private string id;
    private string wwwtext;

    private void Start()
    {
        StartSyncing();
    }
    private void StartSyncing()
    {
        StartCoroutine(Sync());
    }
    IEnumerator Sync()
    {
        WWW www = new WWW("http://juliankorevaar.nl/AndroidApp/hololensapi.php");
        yield return www;
        string itemsDataString = www.text;
        emptytext.text = itemsDataString;
        if (!string.IsNullOrEmpty(itemsDataString))
        {
            InstantiateScript.Instance.Spawn();
        }

    }
}
