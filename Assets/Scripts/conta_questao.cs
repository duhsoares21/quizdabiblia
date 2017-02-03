using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class conta_questao : MonoBehaviour {

    // Use this for initialization
    public int pergunta;
	void Start () {
        pergunta = 1;
	    if(PlayerPrefs.GetInt("contador") != 0)
        {
            pergunta = PlayerPrefs.GetInt("contador");
        }
	}
	
	// Update is called once per frame
	void Update () {
        string contador = "PERGUNTA " + pergunta + " / 6";
        GetComponent<Text>().text = contador;
    }
}
