using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ScenarioPanel : MonoBehaviour
{
    //Text UI of the scenario name
    [SerializeField]
    private Text nameText;
    //Text UI of date
    [SerializeField]
    private Text dateText;

    //All needed data for a scenario
    private int id;
    private string name;
    private string date;

    //Initialize when new panel created
    public void Initialize(int id, string name, string date)
    {
        //Set all data from initialized void
        this.id = id;
        this.name = name;
        this.date = date;
        nameText.text = name;
        dateText.text = date;
    }
    public void LoadScenario()
    {
        //Load scenario when clicked
        DataGetter.Instance.OnLoadScenario(id);
    }
}
