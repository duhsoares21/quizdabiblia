using UnityEngine;
using System.Collections;
using UnityEngine.SceneManagement;

public class proxima_questao : MonoBehaviour {

	public void next_question()
    {
        int contador = PlayerPrefs.GetInt("contador");
        PlayerPrefs.SetInt("contador", contador + 1);

        if (contador == 6)
        {
            PlayerPrefs.SetInt("contador", 1);
        }

        SceneManager.LoadScene("perguntas");
    }
}
