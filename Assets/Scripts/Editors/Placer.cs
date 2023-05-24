using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Placer : MonoBehaviour
{
    void Update()
    {
        if (Physics.Raycast(transform.position, -Vector3.up, out RaycastHit hit, Mathf.Infinity))
        {
            transform.position = new Vector3(transform.position.x, hit.point.y, transform.position.z);
        }
    }

}
