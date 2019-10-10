using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class EnterID : MonoBehaviour
{
    [SerializeField]
    private Text currentID;

    public void AddID(int number)
    {
        if(currentID.text == "0")
        {
            currentID.text = number.ToString();
        }
        else
        {
            currentID.text += number;
        }
    }

    public void RemoveID()
    {
        string laststring = currentID.text.Remove(currentID.text.Length - 1, 1);

        currentID.text = laststring;

        if (laststring == "") 
        {
            currentID.text = "0";
        }
    }



}
