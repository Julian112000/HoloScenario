using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class InstantiateScript : MonoBehaviour
{
    public static InstantiateScript Instance;

    [SerializeField]
    private GameObject prefab;
    [SerializeField]
    private float range;
    [SerializeField]
    private int hehe;

    private void Awake()
    {
        Instance = this;
    }
    public void Spawn()
    {
        for (int i = 0; i < hehe; i++)
        {
            float randomx = Random.Range(-range, range);
            float randomy = Random.Range(-range, range);
            float randomz = Random.Range(-range, range);
            Instantiate(prefab, new Vector3(randomx, randomy, randomz), Quaternion.identity);
        }
    }
}
