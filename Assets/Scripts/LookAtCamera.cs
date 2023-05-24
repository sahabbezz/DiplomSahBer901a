using System.Collections;
using System.Collections.Generic;
using UnityEditor;
using UnityEngine;

public class LookAtCamera : MonoBehaviour
{

    private void Update()
    {
        Vector3 viewDirection = new Vector3(Camera.main.transform.forward.x, 0, Camera.main.transform.forward.z);
        transform.LookAt(transform.position + viewDirection);
    }

    public void OnDrawGizmos()
    {
        if (!Application.isPlaying)
        {
            SceneView sceneView = GetActiveSceneView();
            if (sceneView)
            {
                // Editor camera stands in for player camera in edit mode
                Vector3 viewDirection = new Vector3(sceneView.camera.transform.forward.x, 0, sceneView.camera.transform.forward.z);
                transform.LookAt(transform.position + viewDirection);
            }
        }
    }

    private SceneView GetActiveSceneView()
    {
        // Return the focused window if it is a SceneView
        if (EditorWindow.focusedWindow != null && EditorWindow.focusedWindow.GetType() == typeof(SceneView))
            return (SceneView)EditorWindow.focusedWindow;

        return null;
    }
}
