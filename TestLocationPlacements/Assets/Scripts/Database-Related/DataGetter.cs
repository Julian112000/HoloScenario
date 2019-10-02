using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class DataGetter : MonoBehaviour
{
    public static DataGetter Instance;

    #region Events
    public delegate void OnDataLoaded();
    public static OnDataLoaded ondataloaded;
    public delegate void OnHoloIdLoaded();
    public static OnHoloIdLoaded onhololoaded;
    #endregion

    [SerializeField]
    private string url;
    [SerializeField]
    private int unitamounts = -1;

    [SerializeField]
    private List<Data> datas = new List<Data>();
    public List<Data> GetDatas()
    {
        return datas;
    }

    private void Awake()
    {
        Instance = this;
    }

    public void GetUnitData(int sceneid, int id)
    {
        StartCoroutine(GetUnitDataIE(sceneid, id));
    }
    public void OnLoadScenario(int id)
    {
        StartCoroutine(GetSceneData(id));
        StartCoroutine(LoadScenario(id));
    }
    public void LoadScenarios(GameObject obj, int amount)
    {
        for (int i = 0; i < amount; i++)
        {
            StartCoroutine(LoadScenarios(i));
        }
    }
    public void Submit(Text hololensIdText)
    {
        int id = int.Parse(hololensIdText.text);
        StartCoroutine(GetGpsLocation(id));
    }

    IEnumerator GetSceneData(int sceneid)
    {
        WWWForm form = new WWWForm();
        form.AddField("action", "load");
        form.AddField("sceneid", sceneid);
        WWW www = new WWW(url + "scenarioapi.php", form);
        yield return www;
        if (www.text != "error")
        {
            string datatext = www.text;
            string[] values = datatext.Split(","[0]);
            unitamounts = int.Parse(values[3]);
        }
    }
    IEnumerator LoadScenario(int sceneid)
    {
        WWWForm form = new WWWForm();
        form.AddField("action", "scenario");
        form.AddField("sceneid", sceneid);
        WWW www = new WWW(url + "loadapi.php", form);
        yield return www;
        if (www.text != "error")
        {
            string data = www.text;
            string[] values = data.Split(";"[0]);

            string db_name = values[0];
            string db_time = values[1];
            int db_amount = int.Parse(values[2]);
            SceneManager.Instance.Load(sceneid, db_name, db_time, db_amount);
        }

    }
    IEnumerator LoadScenarios(int id)
    {
        WWWForm form = new WWWForm();
        form.AddField("action", "load");
        form.AddField("sceneid", id);
        WWW www = new WWW(url + "scenarioapi.php", form);
        yield return www;
        if (www.text != "")
        {
            string data = www.text;
            string[] values = data.Split(","[0]);

            int db_id = int.Parse(values[0]);
            string db_name = values[1];
            string db_time = values[2];
            SceneManager.Instance.CreateNewPanel(db_id, db_name, db_time);
        }
    }
    IEnumerator GetGpsLocation(int sceneid)
    {
        WWWForm form = new WWWForm();
        form.AddField("action", "gps");
        form.AddField("sceneid", sceneid);
        WWW www = new WWW(url + "loadapi.php", form);
        yield return www;
        if (www.text != "error")
        {
            string datatext = www.text;
            string[] values = datatext.Split(";"[0]);

            #if UNITY_EDITOR
            values[0] = values[0].Replace(".", ",");
            values[1] = values[1].Replace(".", ",");
            values[2] = values[2].Replace(".", ",");
            #endif

            double lat = double.Parse(values[0]);
            double lon = double.Parse(values[1]);
            float alt = float.Parse(values[2]);

            SceneManager.Instance.SetGps(new Vector2d(lat, lon));
        }
        else
        {
            Debug.Log("can't find id");
        }
    }
    IEnumerator GetUnitDataIE(int sceneid, int id)
    {
        yield return new WaitForSeconds(1f);
        WWWForm form = new WWWForm();
        form.AddField("action", "unit");
        form.AddField("sceneid", sceneid);
        form.AddField("order", id);
        WWW www = new WWW(url + "loadapi.php", form);
        yield return www;
        if (www.text != "error")
        {
            string datatext = www.text;

            string[] values = datatext.Split(";"[0]);

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
            //
            Data data = new Data(db_id, lat, lon, alt, rot);
            datas.Add(data);
            //
            if (datas.Count == unitamounts)
                ondataloaded();
        }

    }
}
