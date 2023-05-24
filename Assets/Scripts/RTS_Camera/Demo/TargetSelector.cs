using UnityEngine;
using System.Collections;
using RTS_Cam;

[RequireComponent(typeof(RTS_Camera))]
public class TargetSelector : MonoBehaviour
{
    private RTS_Camera cam;
    private new Camera camera;
    public string[] targetsTag;
    public ObjectEditor Editor;
    public SubMenuManager SubMenu;
    private void Start()
    {
        cam = gameObject.GetComponent<RTS_Camera>();
        camera = gameObject.GetComponent<Camera>();
    }

    Transform FirstTarget;
    private void Update()
    {
        Ray ray = camera.ScreenPointToRay(Input.mousePosition);
        Mouse0Click(ray);
        Mouse1Click(ray);

    }
    void Mouse0Click(Ray ray)
    {
        if (Input.GetMouseButtonDown(0))
        {
            cam.useScrollwheelZooming = false;
            if (Physics.Raycast(ray, out RaycastHit hit))
            {
                for (int i = 0; i < targetsTag.Length; i++)
                {
                    if (hit.transform.CompareTag(targetsTag[i]))
                    {
                        if (hit.transform != FirstTarget)
                        {
                            Editor.SetTarget(hit.transform);
                            FirstTarget = hit.transform;
                        }
                        else
                        {
                            FirstTarget = null;
                        }
                    }
                }
            }
        }

        if (!Editor.TargetIsNull())
        {
            if (Physics.Raycast(ray, out RaycastHit hit, Mathf.Infinity, ~(1 << 2)))
            {
                Editor.SetTargetPosition(hit.point);
            }
            float mouse = Input.mouseScrollDelta.y;
            float clamp = Mathf.Clamp(mouse, -1, 1);

            if (Input.GetKey(KeyCode.E))
            {

                Vector3 size = Editor.GetTarget().localScale + Vector3.one * clamp;
                if (size.x != 0 && size.y != 0 && size.z != 0)
                    Editor.GetTarget().localScale = size;
            }
            else
            {
                if (Input.GetKey(KeyCode.R))
                    Editor.GetTarget().rotation *= Quaternion.AngleAxis(-(clamp * 45), Vector3.right);
                else
                    Editor.GetTarget().rotation *= Quaternion.AngleAxis(-(clamp * 45), Vector3.up);

            }

            if (Input.GetKeyDown(KeyCode.Delete))
            {
                Editor.DeleteTarget();
            }
        }

        if (Input.GetMouseButtonUp(0))
        {
            Editor.ResetTarget();
            cam.useScrollwheelZooming = true;
        }

    }

    void Mouse1Click(Ray ray)
    {
        if (Input.GetMouseButtonDown(1))
        {
            if (Physics.Raycast(ray, out RaycastHit hit))
            {
                if (hit.transform.CompareTag("Light"))
                {
                    SubMenu.LightSelected(hit.transform);
                }
            }
        }
    }
}
