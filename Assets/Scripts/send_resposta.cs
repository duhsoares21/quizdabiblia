using UnityEngine;
using System.Collections;
using SimpleJSON;
using UnityEngine.UI;

public class send_resposta : MonoBehaviour {

    public string url = "http://www.pladoo.com.br/quizbiblia/api/teste-conhecimentos/resposta.php";
    public string resposta_final;
    // Use this for initialization

    IEnumerator responde()
    {
        string param = "?id_resposta=" + resposta_final;
        WWW www = new WWW(url + param);
        yield return www;
        Debug.Log(url + param);
        Debug.Log(www.text);
        var json_data = JSON.Parse(www.text);
        int resposta_certa = int.Parse(json_data["resposta_certa"]);
        if (resposta_certa == 1)
        {
            GameObject.Find("painel_acertou").GetComponent<Image>().enabled = true;
            GameObject.Find("txt_acertou").GetComponent<Text>().enabled = true;
            GameObject.Find("btn_acertou").GetComponent<Image>().enabled = true;
            GameObject.Find("txt_btn_acertou").GetComponent<Text>().enabled = true;
        }
        else
        {
            GameObject.Find("painel_errou").GetComponent<Image>().enabled = true;
            GameObject.Find("txt_errou").GetComponent<Text>().enabled = true;
            GameObject.Find("btn_errou").GetComponent<Image>().enabled = true;
            GameObject.Find("txt_btn_errou").GetComponent<Text>().enabled = true;
        }
    }

    public void responder_questao()
    {
        StartCoroutine("responde");
    }
}
