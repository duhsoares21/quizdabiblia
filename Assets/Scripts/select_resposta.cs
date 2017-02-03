using UnityEngine;
using System.Collections;
using UnityEngine.UI;
public class select_resposta : MonoBehaviour {

    // Use this for initialization

    public void seleciona_resposta () {

        GameObject.Find("btn_confirma").GetComponent<send_resposta>().resposta_final = GetComponent<Transform>().GetChild(0).GetComponent<Transform>().name;
        string resposta_final = GameObject.Find("btn_confirma").GetComponent<send_resposta>().resposta_final;
        Debug.Log(resposta_final);
        Color32 green = new Color32(24, 206, 0, 255);
        Color32 white_alpha = new Color32(255, 255, 255, 255);
        Color32 grey = new Color32(26, 26, 26, 255);
        Color32 newgreen = new Color32(0, 186, 103, 255);

        GameObject[] buttons = GameObject.FindGameObjectsWithTag("btn_resposta");
        foreach (GameObject button in buttons)
        {
            button.GetComponent<Image>().color = white_alpha;
            button.GetComponentInChildren<Text>().color = grey;
        }
        GameObject.Find(resposta_final).GetComponent<Text>().color = Color.white;   
        GetComponent<Image>().color = green;

        GameObject.Find("btn_confirma").GetComponent<Image>().color = newgreen;
        GameObject.Find("btn_confirma").GetComponent<Button>().enabled = true;
        //GameObject.Find("resposta_check").GetComponent<send_resposta>().responder_questao();

    }

}
