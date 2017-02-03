using UnityEngine;
using System.Collections;

public class niveis : MonoBehaviour {
	// Use this for initialization
	public string getNivel(int nivel)
    {
        string nivel_texto;

        if(nivel==0)
        {
            nivel_texto = "MUITO FÁCIL";
        }
        else if(nivel==1)
        {
            nivel_texto = "FÁCIL";
        }
        else if (nivel == 2)
        {
            nivel_texto = "MÉDIO";
        }
        else if (nivel == 3)
        {
            nivel_texto = "DIFÍCIL";
        }
        else
        {
            nivel_texto = "MUITO DIFÍCIL";
        }

        return nivel_texto;
    }
}
