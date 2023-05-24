using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Runtime.Serialization.Formatters.Binary;
using System.IO;

#region FuckUnity
[System.Serializable]
public struct MyLight
{
    public float r;
    public float g;
    public float b;
    public float intensity;
    public MyLight(Light light)
    {
        r = light.color.r;
        g = light.color.g;
        b = light.color.b;
        intensity = light.intensity;
    }
}
[System.Serializable]
public struct MyVector3
{
    public float x;
    public float y;
    public float z;

    public MyVector3(Vector3 vector3)
    {
        x = vector3.x;
        y = vector3.y;
        z = vector3.z;
    }
}
[System.Serializable]
public struct MyQuaternion
{
    public float x;
    public float y;
    public float z;
    public float w;

    public MyQuaternion(Quaternion quaternion)
    {
        x = quaternion.x;
        y = quaternion.y;
        z = quaternion.z;
        w = quaternion.w;
    }
}
[System.Serializable]
public struct ExternalTransform
{
    public string name;
    public MyVector3 position;
    public MyVector3 scale;
    public MyQuaternion rotation;
}
#endregion
#region DinanicProperties
[System.Serializable]
public struct SheetEntry
{
    public string name;
    public int valueI;
    public float valueF;
    public SheetEntry(string name, int valueI = 0, float valueF = 0)
    {
        this.name = name;
        this.valueI = valueI;
        this.valueF = valueF;
    }
}

[System.Serializable]
public struct CharacterSheet
{
    public SheetEntry[] sheetEntries;
    public void CreateBasicEntries()
    {
        sheetEntries = new SheetEntry[] { new SheetEntry("LVL"), new SheetEntry("HP"), new SheetEntry("SP"), new SheetEntry("AP") };
    }
    public void AddEntries(SheetEntry[] entries)
    {
        if (sheetEntries == null)
            CreateBasicEntries();
        SheetEntry[] tmp = new SheetEntry[sheetEntries.Length + entries.Length];
        for (int i = 0; i < sheetEntries.Length; i++)
            tmp[i] = sheetEntries[i];
        for (int i = sheetEntries.Length; i < entries.Length; i++)
            tmp[i] = entries[i - sheetEntries.Length];
        sheetEntries = tmp;
    }
    public SheetEntry GetSheetEntry(string name)
    {
        for (int i = 0; i < sheetEntries.Length; i++)
            if (sheetEntries[i].name == name)
                return sheetEntries[i];
        return new SheetEntry();
    }
    public void SetSheetEntry(string name, int valueI)
    {
        for (int i = 0; i < sheetEntries.Length; i++)
            if (sheetEntries[i].name == name)
            {
                sheetEntries[i].valueI = valueI;
            }
    }
    public void SetSheetEntry(string name, float valueF)
    {

        for (int i = 0; i < sheetEntries.Length; i++)
            if (sheetEntries[i].name == name)
            {
                sheetEntries[i].valueF = valueF;
            }
    }
    public void SetSheetEntry(string name, int valueI, float valueF)
    {

        for (int i = 0; i < sheetEntries.Length; i++)
            if (sheetEntries[i].name == name)
            {
                sheetEntries[i].valueI = valueI;
                sheetEntries[i].valueF = valueF;
            }
    }
}

[System.Serializable]
public struct DynamicPropeties
{
    public string name;
    public CharacterSheet characterSheet;
    //inventory would be here ish
}

[System.Serializable]
public struct LightList
{
    public MyLight[] myLights;
}
#endregion


public class SaveSystem : MonoBehaviour
{
    GameManager gameManager;
    EditorManager editorManager;

    void Start()
    {
        gameManager = GetComponent<GameManager>();
    }

    public void SaveEditor()
    {
        string GeometryPath = Application.dataPath + "/modules/" + gameManager.CurrentModule + "/geometry.save";
        string LightPath    = Application.dataPath + "/modules/" + gameManager.CurrentModule + "/lights.save"; 
        string StatsPath = Application.dataPath + "/modules/" + gameManager.CurrentModule + "/stats.save";
        string InvPath = Application.dataPath + "/modules/" + gameManager.CurrentModule + "/inv.save";
        string MathPath = Application.dataPath + "/modules/" + gameManager.CurrentModule + "/math.save";

        editorManager = GameObject.Find("Canvas").GetComponent<EditorManager>();
        Transform[] transforms = editorManager.Collector.things.ToArray();
        int l = transforms.Length;
        ExternalTransform[] extTransforms = new ExternalTransform[l];
        List<MyLight> Lights = new List<MyLight>();
        for (int i = 0; i < l; i++)
        {
            if (transforms[i].CompareTag("Light"))
            {
                Lights.Add(new MyLight(transforms[i].GetComponentInChildren<Light>()));
            }
            extTransforms[i] = convertTransform(transforms[i]);
            Debug.Log(extTransforms[i].name);
        }

        FileStream fs = new FileStream(GeometryPath, FileMode.Create);
        BinaryFormatter formatter = new BinaryFormatter();
        formatter.Serialize(fs, extTransforms);
        fs.Close();

        fs = new FileStream(LightPath, FileMode.Create);
        formatter.Serialize(fs, Lights);
        fs.Close();

        static ExternalTransform convertTransform(Transform transform)
        {
            return new ExternalTransform
            {
                name = transform.name,
                position = new MyVector3(transform.position),
                scale = new MyVector3(transform.localScale),
                rotation = new MyQuaternion(transform.rotation)
            };
        }
    }

    public void LoadEditor(string ModuleName)
    {
        gameManager.CurrentModule = ModuleName;
        string GeometryPath = Application.dataPath + "/modules/" + gameManager.CurrentModule + "/geometry.save";
        string LightPath = Application.dataPath + "/modules/" + gameManager.CurrentModule + "/lights.save";
        string StatsPath = Application.dataPath + "/modules/" + gameManager.CurrentModule + "/stats.save";
        string InvPath = Application.dataPath + "/modules/" + gameManager.CurrentModule + "/inv.save";
        string MathPath = Application.dataPath + "/modules/" + gameManager.CurrentModule + "/math.save";


        FileStream fs = new FileStream(GeometryPath, FileMode.Open);
        BinaryFormatter conv = new BinaryFormatter();
        ExternalTransform[] extTransforms = (ExternalTransform[])conv.Deserialize(fs);
        fs.Close();

        fs = new FileStream(LightPath, FileMode.Open);
        List<MyLight> Lights = (List<MyLight>)conv.Deserialize(fs);

        editorManager = GameObject.Find("Canvas").GetComponent<EditorManager>();
        for (int i = 0; i < extTransforms.Length; i++)
        {
            string name = extTransforms[i].name;
            //Debug.Log(name);
            int startPosition = name.IndexOf(" ") + 1;
            string objName = name.Substring(0, startPosition - 1);
            //int index = int.Parse(name.Substring(startPosition));
            //Transform[] transform = editorManager.Collector.GetComponentsInChildren<Transform>();
            bool found = false;
            for (int j = 0; j < editorManager.Static.Count; j++)
            {
                if (objName == editorManager.Static[j].Object.name)
                {
                    editorManager.CreateObj(editorManager.Static[j], extTransforms[i]);
                    found = true;
                    break;
                }
            }
            if (!found)
            {
                for (int j = 0; j < editorManager.Dynamic.Count; j++)
                {
                    if (objName == editorManager.Dynamic[j].Object.name)
                    {
                        editorManager.CreateObj(editorManager.Dynamic[j], extTransforms[i]);
                        found = true;
                        break;
                    }
                }
            }
            if (!found)
            {
                for (int j = 0; j < editorManager.Dynamic.Count; j++)
                {
                    if (objName == editorManager.Dynamic[j].Object.name)
                    {
                        editorManager.CreateObj(editorManager.Dynamic[j], extTransforms[i]);
                        found = true;
                        break;
                    }
                }
            }
            if (!found)
            {
                for (int j = 0; j < editorManager.Lights.Length; j++)
                {
                    if (objName == editorManager.Lights[j].name)
                    {
                        editorManager.CreateObj(new ExternalObject(editorManager.Lights[j]), extTransforms[i], Lights[0]);
                        Lights.RemoveAt(0);
                        found = true;
                        break;
                    }
                }
            }
        }

    }
}
