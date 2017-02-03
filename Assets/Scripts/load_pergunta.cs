using UnityEngine;
using System.Collections;
using SimpleJSON;
using UnityEngine.UI;
public class load_pergunta : MonoBehaviour {

	public string url = "http://www.pladoo.com.br/quizbiblia/api/teste-conhecimentos/";

    public GameObject txt_pergunta;

    public GameObject txt_resposta_1;
    public GameObject txt_resposta_2;
    public GameObject txt_resposta_3;
    public GameObject txt_resposta_4;

    IEnumerator Start() {
		WWW www = new WWW(url);
		yield return www;

        var json_data = JSON.Parse(www.text);
        string pergunta = json_data["pergunta"];

        txt_pergunta.GetComponent<Text>().text = pergunta;

        string resposta_1 = json_data["respostas"]["resposta_1"];
        string idresposta_1 = json_data["respostas"]["id_resposta_1"];

        txt_resposta_1.name = idresposta_1;
        txt_resposta_1.GetComponent<Text>().text = resposta_1;

        string resposta_2 = json_data["respostas"]["resposta_2"];
        string idresposta_2 = json_data["respostas"]["id_resposta_2"];

        txt_resposta_2.name = idresposta_2;
        txt_resposta_2.GetComponent<Text>().text = resposta_2;

        string resposta_3 = json_data["respostas"]["resposta_3"];
        string idresposta_3 = json_data["respostas"]["id_resposta_3"];

        txt_resposta_3.name = idresposta_3;
        txt_resposta_3.GetComponent<Text>().text = resposta_3;

        string resposta_4 = json_data["respostas"]["resposta_4"];
        string idresposta_4 = json_data["respostas"]["id_resposta_4"];

        txt_resposta_4.name = idresposta_4;
        txt_resposta_4.GetComponent<Text>().text = resposta_4;
    }
	// Update is called once per frame
	void Update () {
	}
}
