using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.IO;

public class GameManager : MonoBehaviour
{
    public string CurrentModule;
    [HideInInspector]
    public string[] Modules;

    public void SetModule(int nmb)
    {
        CurrentModule = Modules[nmb];
    }
    public void GetModules()
    {
        string pathToModules = Application.dataPath + "/modules/";
        if (!Directory.Exists(pathToModules))
            Directory.CreateDirectory(pathToModules);
        else
        {
            string[] tmp = Directory.GetDirectories(pathToModules);
            Modules = new string[tmp.Length];
            DirectoryInfo dirInfo = new DirectoryInfo(pathToModules);
            for (int i = 0; i < tmp.Length; i++)
            {
                Modules[i] = dirInfo.Name;
            }
        }
    }


}
