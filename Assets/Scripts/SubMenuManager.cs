using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class SubMenuManager : MonoBehaviour
{
    public GameObject LightSubMenu;
    public Slider Red;
    public Slider Green;
    public Slider Blue;
    public Slider Intensity;

    Light light;
    public void LightSelected(Transform transform)
    {
        light = transform.GetComponentInChildren<Light>();
        Red.value = light.color.r;
        Green.value = light.color.g;
        Blue.value = light.color.b;
        Intensity.value = light.intensity;
        LightSubMenu.SetActive(true);
    }

    public void LightChanged(Slider slider)
    {
        if (slider.name == "Red")
            light.color = new Color(slider.value, light.color.g, light.color.b);
        else if (slider.name == "Green")
            light.color = new Color(light.color.r, slider.value, light.color.b);
        else if (slider.name == "Blue")
            light.color = new Color(light.color.r, light.color.g, slider.value);
        else light.intensity = slider.value;
    }
}
