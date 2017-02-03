using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class timer : MonoBehaviour {

    public int tempo = 20;
	// Use this for initialization
	void Start () {
        StartCoroutine(tempo_contador());
    }

    void Update()
    {
        if(tempo==0)
        {
            proxima_questao next_question = new proxima_questao();
            next_question.next_question();
        }
    }

    IEnumerator tempo_contador()
    {
        yield return new WaitForSeconds(1);
        tempo = tempo - 1;
        GameObject.Find("tempo").GetComponent<Text>().text = tempo + "'";
        StartCoroutine(tempo_contador());
    }
}
