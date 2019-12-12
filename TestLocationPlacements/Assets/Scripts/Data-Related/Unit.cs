using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Unit : MonoBehaviour
{
    //main position of unit
    private Vector3 pos;

    [SerializeField]
    [Range(0, 5)]
    protected float speed;

    protected Dictionary<int, Vector3> waypointspos = new Dictionary<int, Vector3>();

    private Vector3 gps;
    protected int currentWaypoint = 0;

    [SerializeField]
    private int turnDistance;
    [SerializeField]
    private float rotationSpeed;

    private void Update()
    {
        if (waypointspos.Count != 0 && currentWaypoint < waypointspos.Count)
        {
            Move();
            transform.position += transform.forward * speed * Time.deltaTime;
            Quaternion targetRotation = Quaternion.LookRotation(waypointspos[currentWaypoint] - transform.position);
            transform.rotation = Quaternion.Slerp(transform.rotation, targetRotation, rotationSpeed * Time.deltaTime);
            Rotate(waypointspos[currentWaypoint]);

            if (Vector3.Distance(transform.position, waypointspos[currentWaypoint]) < turnDistance)
            {
                currentWaypoint++;
            }
        }
    }
    public virtual void Move()
    {
        //
    }
    public virtual void Rotate(Vector3 pos)
    {
        //
    }
    public void SetPosition(Data data, Vector3 gps)
    {
        this.gps = gps;

        DataGetter.Instance.GetWaypoints(data, this);
        //Return latitude and longitude to a vector3
        pos = SceneManager.Instance.GeoToWorldPositionXZ(new Vector2d(data.GetLatitude(), data.GetLongitude()));

        //Get difference between own gps and unit position
        Vector3 dif = gps - pos;

        //Set position and rotation in unity xyz
        transform.position = new Vector3(dif.x, 0, dif.z);
        transform.rotation = Quaternion.Euler(0, data.GetRotation(), 0);
    }
    public void SetWaypoint(int index, Vector2d waypoint)
    {
        waypointspos.Add(index, (gps - SceneManager.Instance.GeoToWorldPositionXZ(waypoint)));
        GameObject way = new GameObject();
        way.transform.position = gps - SceneManager.Instance.GeoToWorldPositionXZ(waypoint);
        way.name = "way " + index;
    }
}
