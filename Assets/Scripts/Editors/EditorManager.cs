using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using System.IO;
using Dummiesman;
using System.Linq;

public struct ExternalObject
{
    public GameObject Object;
    public GameObject MenuObject;
    public string FolderPath;

    public ExternalObject(GameObject gameObject) : this()
    {
        this.Object = gameObject;
    }
}

public class EditorManager : MonoBehaviour
{
    public GameManager GameManager;
    public GameObject UICard;
    public Transform ObjectPos;

    public GameObject StaticPrefab;
    public GameObject DynamicCharacterPrefab;
    public GameObject DynamicItemPrefab;

    public ThingsCollector Collector;
    int collectorSize = 0;

    public List<ExternalObject> Static;
    public List<ExternalObject> Dynamic;
    public List<ExternalObject> Items;

    [Space(20)]
    [Header("Lights")]
    public GameObject[] Lights;
    public GameObject[] LightsCards;
    public List<ExternalObject> LightObjects;
    public void Start()
    {
        GameManager = GameObject.FindGameObjectWithTag("GameManager").GetComponent<GameManager>();
        GetDataFromModule(GameManager.CurrentModule);
        LightsInit();
        FillStatic();
        FillDynamic();
        FillItems();
    }
    public void Menu_init()
    {
        if (collectorSize == 0)
        {
            collectorSize = Collector.things.Count;
            TypeSwitch();
        }

    }
    void LightsInit()
    {
        LightObjects = new List<ExternalObject>();
        for (int i = 0; i < Lights.Length; i++)
        {
            ExternalObject tmp = new ExternalObject(Lights[i]);
            tmp.MenuObject = LightsCards[i];
            LightObjects.Add(tmp);
            tmp.MenuObject.GetComponentInChildren<Button>().onClick.AddListener(delegate { CreateObj(tmp); });
        }
    }

    public void GetDataFromModule(string moduleName)
    {
        string StaticPath = Application.dataPath + "/modules/" + moduleName + "/Static" + "/Models";
        string DynamicPath = Application.dataPath + "/modules/" + moduleName + "/Dynamic";

        ReadStatic—ontent();
        ReadDynamic—ontent();

        void ReadStatic—ontent()
        {
            string[] Static—ontent = Directory.GetDirectories(StaticPath);
            Static = new List<ExternalObject>();
            for (int i = 0; i < Static—ontent.Length; i++)
            {
                ExternalObject tmp = new ExternalObject();
                tmp.FolderPath = new DirectoryInfo(Static—ontent[i]).FullName;
                tmp.Object = new OBJLoader().Load(Path.Combine(Static—ontent[i], "model.obj"));
                tmp.Object.name.Replace("(Clone)", "").Trim();
                tmp.Object.layer = 7;
                tmp.Object.tag = "Static";
                tmp.Object.AddComponent<MeshCollider>().sharedMesh = tmp.Object.GetComponentInChildren<MeshFilter>().mesh;
                tmp.Object.SetActive(false);
                Static.Add(tmp);
            }
        }
        void ReadDynamic—ontent()
        {

            Dynamic = new List<ExternalObject>();
            Items = new List<ExternalObject>();
            string[] Dynamic—ontent = Directory.GetDirectories(Path.Combine(DynamicPath, "Creatures", "NPC"));

            for (int i = 0; i < Dynamic—ontent.Length; i++)
            {
                ExternalObject tmp = new ExternalObject
                {
                    FolderPath = new DirectoryInfo(Dynamic—ontent[i]).FullName,
                    Object = Instantiate(DynamicCharacterPrefab, GameManager.transform.position, Quaternion.identity)
                };
                //spriteLoad
                tmp.Object.name.Replace("(Clone)", "").Trim();
                tmp.Object.SetActive(false);
                Dynamic.Add(tmp);
            }
            Dynamic—ontent = Directory.GetDirectories(Path.Combine(DynamicPath, "Items"));
            for (int i = 0; i < Dynamic—ontent.Length; i++)
            {
                ExternalObject tmp = new ExternalObject
                {
                    FolderPath = new DirectoryInfo(Dynamic—ontent[i]).FullName,
                    Object = Instantiate(DynamicItemPrefab, GameManager.transform.position, Quaternion.identity)
                };
                //spriteLoad
                tmp.Object.name.Replace("(Clone)", "").Trim();
                tmp.Object.SetActive(false);
                Items.Add(tmp);
            }

            Dynamic—ontent = Directory.GetDirectories(Path.Combine(DynamicPath, "Creatures", "Playable"));
            for (int i = 0; i < Dynamic—ontent.Length; i++)
            {
                ExternalObject tmp = new ExternalObject
                {
                    FolderPath = new DirectoryInfo(Dynamic—ontent[i]).FullName,
                    Object = Instantiate(DynamicCharacterPrefab, GameManager.transform.position, Quaternion.identity)
                };
                //spriteLoad
                tmp.Object.name.Replace("(Clone)", "").Trim();
                tmp.Object.SetActive(false);
                Dynamic.Add(tmp);
            }
        }
    }

    Sprite GetIconFrom(string path)
    {
        byte[] bytes = File.ReadAllBytes(path);
        Texture2D loadTexture = new Texture2D(1, 1);
        loadTexture.LoadImage(bytes);
        Sprite mySprite = Sprite.Create(loadTexture, new Rect(0.0f, 0.0f, loadTexture.width, loadTexture.height), new Vector2(0.5f, 0.5f), 100.0f);
        return mySprite;
    }

    public void TypeSwitch(Dropdown dropdown = null)
    {
        int ObjectType = dropdown == null ? 0 : dropdown.value;//0 - Static, 1 - Dynamic, 2 - Light, 3 - Items
        if (ObjectType == 0)
        {
            DisableAll();
            for (int i = 0; i < Static.Count; i++)
            {
                Static[i].MenuObject.SetActive(true);
            }
        }
        else if (ObjectType == 1)
        {
            DisableAll();
            for (int i = 0; i < Dynamic.Count; i++)
            {
                Dynamic[i].MenuObject.SetActive(true);
            }
        }
        else if (ObjectType == 2)
        {
            DisableAll();
            for (int i = 0; i < LightObjects.Count; i++)
            {
                LightObjects[i].MenuObject.SetActive(true);
            }
        }
        else if (ObjectType == 3)
        {
            DisableAll();
            for (int i = 0; i < Items.Count; i++)
            {
                Items[i].MenuObject.SetActive(true);
            }
        }

        void DisableAll()
        {
            DisableStaticMenu();
            DisableDynamicMenu();
            DisableLightMenu();
            DisableItemsMenu();
        }
        void DisableStaticMenu()
        {
            for (int i = 0; i < Static.Count; i++)
            {
                if (Static[i].MenuObject != null)
                    Static[i].MenuObject.SetActive(false);
            }
        }
        void DisableDynamicMenu()
        {
            for (int i = 0; i < Dynamic.Count; i++)
            {
                if (Dynamic[i].MenuObject != null)
                    Dynamic[i].MenuObject.SetActive(false);
            }
        }
        void DisableLightMenu()
        {
            for (int i = 0; i < LightObjects.Count; i++)
            {
                if (LightObjects[i].MenuObject != null)
                    LightObjects[i].MenuObject.SetActive(false);
            }
        }
        void DisableItemsMenu()
        {
            for (int i = 0; i < Items.Count; i++)
            {
                if (Items[i].MenuObject != null)
                    Items[i].MenuObject.SetActive(false);
            }
        }

    }
    void FillStatic()
    {
        for (int i = 0; i < Static.Count; i++)
        {
            ExternalObject tmp = new ExternalObject
            {
                FolderPath = Static[i].FolderPath,
                Object = Static[i].Object
            };
            tmp.MenuObject = Instantiate(UICard, ObjectPos);
            //Debug.Log("Static path is = " + Path.Combine(Static[i].FolderPath, "icon.jpg"));
            tmp.MenuObject.GetComponentInChildren<Button>().onClick.AddListener(delegate { CreateObj(tmp); });
            DirectoryInfo tmpdir = new DirectoryInfo(Static[i].FolderPath);
            tmp.MenuObject.GetComponentInChildren<Image>().sprite = GetIconFrom(Path.Combine(Static[i].FolderPath, "icon.png"));
            tmp.MenuObject.GetComponentInChildren<Text>().text = tmpdir.Name;
            tmp.MenuObject.name = tmpdir.Name;
            tmp.Object.name = tmpdir.Name;
            tmp.MenuObject.SetActive(false);
            Static[i] = tmp;
        }
    }
    void FillDynamic()
    {
        for (int i = 0; i < Dynamic.Count; i++)
        {
            ExternalObject tmp = new ExternalObject
            {
                FolderPath = Dynamic[i].FolderPath,
                Object = Dynamic[i].Object
            };
            tmp.MenuObject = Instantiate(UICard, ObjectPos);
            tmp.MenuObject.GetComponentInChildren<Button>().onClick.AddListener(delegate { CreateObj(tmp); });

            DirectoryInfo tmpdir = new DirectoryInfo(Dynamic[i].FolderPath);
            string name = tmpdir.GetFiles("*.png")[0].Name;
            //Debug.Log("dynamic path is = " + Path.Combine(Dynamic[i].FolderPath, name));
            tmp.MenuObject.GetComponentInChildren<Image>().sprite = GetIconFrom(Path.Combine(Dynamic[i].FolderPath, name));
            name = tmpdir.GetFiles("*.png")[0].Name.Split('.')[0];
            tmp.MenuObject.GetComponentInChildren<Text>().text = name;
            tmp.MenuObject.name = name;
            tmp.Object.name = name;
            tmp.Object.GetComponentInChildren<SpriteRenderer>().sprite = tmp.MenuObject.GetComponentInChildren<Image>().sprite;
            tmp.MenuObject.SetActive(false);
            Dynamic[i] = tmp;
        }
    }
    void FillItems()
    {
        for (int i = 0; i < Items.Count; i++)
        {
            ExternalObject tmp = new ExternalObject
            {
                FolderPath = Items[i].FolderPath,
                Object = Items[i].Object
            };
            tmp.MenuObject = Instantiate(UICard, ObjectPos);
            tmp.MenuObject.GetComponentInChildren<Button>().onClick.AddListener(delegate { CreateObj(tmp); });

            DirectoryInfo tmpdir = new DirectoryInfo(Items[i].FolderPath);
            string name = tmpdir.GetFiles("*.png")[0].Name;
            //Debug.Log("dynamic path is = " + Path.Combine(Dynamic[i].FolderPath, name));
            tmp.MenuObject.GetComponentInChildren<Image>().sprite = GetIconFrom(Path.Combine(Items[i].FolderPath, name));
            name = tmpdir.GetFiles("*.png")[0].Name.Split('.')[0];
            tmp.MenuObject.GetComponentInChildren<Text>().text = name;
            tmp.MenuObject.name = name;
            tmp.Object.name = name;
            tmp.Object.GetComponentInChildren<SpriteRenderer>().sprite = tmp.MenuObject.GetComponentInChildren<Image>().sprite;
            tmp.MenuObject.SetActive(false);
            Items[i] = tmp;
        }
    }

    public void CreateObj(ExternalObject obj, ExternalTransform transform = new ExternalTransform(), MyLight light = new MyLight())
    {
        //DirectoryInfo tmpdir = new DirectoryInfo(obj.FolderPath);
        RaycastHit Hit;
        GameObject tmp = Instantiate(obj.Object, Collector.transform);
        if (transform.name != null)//if load
        {
            tmp.transform.position = new Vector3(transform.position.x, transform.position.y, transform.position.z);
            tmp.transform.localScale = new Vector3(transform.scale.x, transform.scale.y, transform.scale.z);
            tmp.transform.rotation = new Quaternion(transform.rotation.x, transform.rotation.y, transform.rotation.z, transform.rotation.w);

            if (obj.Object.CompareTag("Light"))
            {
                tmp.GetComponentInChildren<Light>().color = new Color(light.r, light.g, light.b);
                tmp.GetComponentInChildren<Light>().intensity = light.intensity;
            }
        }
        else if (Physics.Raycast(Camera.main.transform.position, Camera.main.transform.forward, out Hit))//if create
        {
            tmp.transform.position = Hit.point;
        }
        tmp.name = tmp.name.Replace("(Clone)", "").Trim() + " " + collectorSize;
        tmp.SetActive(true);
        Collector.things.Add(tmp.transform);
        collectorSize++;
    }

}
