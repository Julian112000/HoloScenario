﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ScenarioPanel : MonoBehaviour
{
    [SerializeField]
    private Text nameText;
    [SerializeField]
    private Text dateText;

    private int id;
    private string name;
    private string date;

    public void Initialize(int id, string name, string date)
    {
        this.id = id;
        this.name = name;
        this.date = date;
        nameText.text = name;
        dateText.text = date;
    }
    public void LoadScenario()
    {
        DataGetter.Instance.OnLoadScenario(id);
    }
}
