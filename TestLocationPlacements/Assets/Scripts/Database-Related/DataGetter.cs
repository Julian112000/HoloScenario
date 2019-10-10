using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class DataGetter : MonoBehaviour
{
    //Static Singleton of DataGetter
    public static DataGetter Instance;

    #region Events
    //Event when unit data are loaded
    public delegate void OnDataLoaded();
    public static OnDataLoaded ondataloaded;
    //Event when hololens data is loaded
    public delegate void OnHoloIdLoaded();
    public static OnHoloIdLoaded onhololoaded;
    #endregion

    //Url to database for main connection
    [SerializeField]
    private string url;

    //Max units 'GET' from database
    [SerializeField]
    private int unitamounts = -1;

    //New datas with filled data from database
    [SerializeField]
    private List<Data> datas = new List<Data>();
    public List<Data> GetDatas()
    {
        return datas;
    }

    private void Awake()
    {
        //Set instance to this script
        Instance = this;
    }

    public void GetUnitData(int sceneid, int id)
    {
        //Coroutine to get data of the units from database
        StartCoroutine(GetUnitDataIE(sceneid, id));
    }
    public void OnLoadScenario(int id)
    {
        //Get scene data from hololens id and load it afterwards
        StartCoroutine(GetSceneData(id));
        StartCoroutine(LoadScenario(id));
    }
    public void LoadScenarios(GameObject obj, int amount)
    {
        //Amount of the amount of calls to check for scenarios
        for (int i = 0; i < amount; i++)
        {
            //Coroutine to load scenarios and get all the data
            StartCoroutine(LoadScenarios(i));
        }
    }
    public void Submit(Text hololensIdText)
    {
        //Submit hololensid and get GPSlocation
        int id = int.Parse(hololensIdText.text);
        StartCoroutine(GetGpsLocation(id));
    }

    IEnumerator GetSceneData(int sceneid)
    {
        //Add new connection form and add data
        WWWForm form = new WWWForm();
        form.AddField("action", "load");
        form.AddField("sceneid", sceneid);
        //Connect of database with right php
        WWW www = new WWW(url + "scenarioapi.php", form);
        //Return all php echo's
        yield return www;
        //Check for errors
        if (www.text != "error")
        {
            //Get data - set unitamounts
            string datatext = www.text;
            string[] values = datatext.Split(","[0]);
            unitamounts = int.Parse(values[3]);
        }
    }
    IEnumerator LoadScenario(int sceneid)
    {
        //Add new connection form and add data
        WWWForm form = new WWWForm();
        form.AddField("action", "scenario");
        form.AddField("sceneid", sceneid);
        //Connect of database with right php
        WWW www = new WWW(url + "loadapi.php", form);
        //Return all php echo's
        yield return www;
        //Check for errors
        if (www.text != "error")
        {
            //Get data
            string data = www.text;
            string[] values = data.Split(";"[0]);

            string db_name = values[0];
            string db_time = values[1];
            int db_amount = int.Parse(values[2]);

            //Load scene with data
            SceneManager.Instance.Load(sceneid, db_name, db_time, db_amount);
        }

    }
    IEnumerator LoadScenarios(int id)
    {
        //Add new connection form and add data
        WWWForm form = new WWWForm();
        form.AddField("action", "load");
        form.AddField("sceneid", id);
        //Connect of database with right php
        WWW www = new WWW(url + "scenarioapi.php", form);
        //Return all php echo's
        yield return www;
        //Check for errors
        if (www.text != "")
        {
            //Get data
            string data = www.text;
            string[] values = data.Split(","[0]);

            int db_id = int.Parse(values[0]);
            string db_name = values[1];
            string db_time = values[2];
            //Create new ui panel for each scenario
            SceneManager.Instance.CreateNewPanel(db_id, db_name, db_time);
        }
    }
    IEnumerator GetGpsLocation(int sceneid)
    {
        //Add new connection form and add data
        WWWForm form = new WWWForm();
        form.AddField("action", "gps");
        form.AddField("sceneid", sceneid);
        //Connect of database with right php
        WWW www = new WWW(url + "loadapi.php", form);
        //Return all php echo's
        yield return www;
        //Check for errors
        if (www.text != "error")
        {
            //Get data
            string datatext = www.text;
            string[] values = datatext.Split(";"[0]);

            //Replace . to , if in unity editor
            #if UNITY_EDITOR
            values[0] = values[0].Replace(".", ",");
            values[1] = values[1].Replace(".", ",");
            values[2] = values[2].Replace(".", ",");
            #endif

            double lat = double.Parse(values[0]);
            double lon = double.Parse(values[1]);
            float alt = float.Parse(values[2]);

            //Set main gps from all recieved data
            SceneManager.Instance.SetGps(new Vector2d(lat, lon));
        }
        else
        {
            //Give error when no id
            Debug.Log("can't find id");
        }
    }
    IEnumerator GetUnitDataIE(int sceneid, int id)
    {
        yield return new WaitForSeconds(1f);
        //Add new connection form and add data
        WWWForm form = new WWWForm();
        form.AddField("action", "unit");
        form.AddField("sceneid", sceneid);
        form.AddField("order", id);
        //Connect of database with right php
        WWW www = new WWW(url + "loadapi.php", form);
        //Return all php echo's
        yield return www;
        //Check for errors
        if (www.text != "error")
        {
            //Get data
            string datatext = www.text;
            string[] values = datatext.Split(";"[0]);

            //Replace , to . if in hololens application
            #if !UNITY_EDITOR
            values[1] = values[1].Replace(",", ".");
            values[2] = values[2].Replace(",", ".");
            values[3] = values[3].Replace(",", ".");
            #endif

            int db_id = int.Parse(values[0]);
            double lat = double.Parse(values[1]);
            double lon = double.Parse(values[2]);
            float alt = float.Parse(values[3]);
            int rot = int.Parse(values[4]);

            //Create new data with all new recieved data
            Data data = new Data(db_id, lat, lon, alt, rot);
            datas.Add(data);
            //If datacount recieved the max amount of units, call event
            if (datas.Count == unitamounts)
                ondataloaded();
        }

    }
}
