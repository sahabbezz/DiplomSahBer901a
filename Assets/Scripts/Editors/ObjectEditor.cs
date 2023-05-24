using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ObjectEditor : MonoBehaviour
{
    public arrow Arrows;
    int TargetOriginalLayer;
    void Start()
    {

    }
    public void SetTargetPosition(Vector3 position)
    {
        Arrows.target.position = position;
    }
    public void SetTarget(Transform target)
    {
        TargetOriginalLayer = target.gameObject.layer;
        target.gameObject.layer = 2;
        Arrows.target = target;
        Arrows.gameObject.SetActive(true);

    }
    public void DeleteTarget()
    {
        Destroy(Arrows.target.gameObject);
        Arrows.target = null;
        Arrows.gameObject.SetActive(false);
    }
    public Transform GetTarget()
    {
        return Arrows.target;
    }
    public void ResetTarget()
    {
        if (Arrows.target != null)
        {
            Arrows.target.gameObject.layer = TargetOriginalLayer;
            Destroy(Arrows.target.GetComponent<Placer>());
            Arrows.target = null;
            Arrows.gameObject.SetActive(false);
        }
    }
    public bool TargetIsNull()
    {
        return Arrows.target == null;
    }
}
