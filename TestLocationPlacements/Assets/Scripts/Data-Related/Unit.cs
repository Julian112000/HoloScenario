using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Unit : MonoBehaviour
{
    //main position of unit
    private Vector3 pos;

    //main speed with limit
    [SerializeField]
    [Range(0, 5)]
    protected float speed;

    //waypoint positions with int being the id and vector3 being the position
    protected Dictionary<int, Vector3> waypointspos = new Dictionary<int, Vector3>();

    //main gps of the unit
    private Vector3 gps;
    //current waypoint the unit is in
    protected int currentWaypoint = 0;

    //min. distance to go to the next waypoint
    [SerializeField]
    private int turnDistance;
    //speed the unit rotates to the new waypoint
    [SerializeField]
    private float rotationSpeed;

    private void Update()
    {
        //when waypoints are not empty and currentwaypoint is not the last in the dictionary
        if (waypointspos.Count != 0 && currentWaypoint < waypointspos.Count)
        {
            //set the move void
            Move();

            //move forward with own orientation
            transform.position += transform.forward * speed * Time.deltaTime;
            //set target rotation of the new waypoint
            Quaternion targetRotation = Quaternion.LookRotation(waypointspos[currentWaypoint] - transform.position);
            transform.rotation = Quaternion.Slerp(transform.rotation, targetRotation, rotationSpeed * Time.deltaTime);
            Rotate(waypointspos[currentWaypoint]);

            //when distance is smaller than the turndistance skip to the next waypoint
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
        //add a new waypoint to the world position and name/position it
        waypointspos.Add(index, (gps - SceneManager.Instance.GeoToWorldPositionXZ(waypoint)));
        GameObject way = new GameObject();
        way.transform.position = gps - SceneManager.Instance.GeoToWorldPositionXZ(waypoint);
        way.name = "way " + index;
    }
}
