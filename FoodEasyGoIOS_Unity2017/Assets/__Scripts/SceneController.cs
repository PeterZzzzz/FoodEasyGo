using UnityEngine.SceneManagement;

public static class SceneController {

    public static int MAIN_SCENE_INDEX = 0;
    public static int LOADING_SCENE_INDEX = 1;
    public static int LOGIN_SCENE_INDEX = 2;

    public static void LoadScene (int index) {
        SceneManager.LoadScene (index);
    }

    public static void LoadStartupScene () {
        LoadScene (0);
    }

    public static void LoadLogInScene () {
        LoadScene (1);
    }

    public static void LoadMainScene () {
        LoadScene (2);
    }
}