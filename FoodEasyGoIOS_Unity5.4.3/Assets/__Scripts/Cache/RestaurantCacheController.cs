using UnityEngine;
using System.Collections;
using System.Collections.Generic;


public class RestaurantCacheController : MonoBehaviour {

    public static RestaurantCacheController instance;

    [ SerializeField]
    public Dictionary<string, JSONObject> restaurantDictionary;
    [SerializeField]
    public List<string> restaurantIDList;


    [ SerializeField]
    public Dictionary<string, JSONObject> dishDictionary;
    [SerializeField]
    public List<string> dishIDList;


    void Awake () {
        if (instance != null) {
            Destroy (instance.gameObject);
        }
        instance = this;

        restaurantDictionary = new Dictionary<string, JSONObject> ();
        restaurantIDList = new List<string> ();
        dishDictionary = new Dictionary<string, JSONObject> ();
        dishIDList = new List<string> ();
    }

    #region Restaurant
    public bool IsRestaurantCached (string restaurantID) {
        return restaurantDictionary.ContainsKey (restaurantID);
    }

    public void CacheRestaurant (string id, JSONObject restaurant) {
        if (!IsRestaurantCached (id)) {
            restaurantDictionary.Add (id, restaurant);
            restaurantIDList.Add (id);
        } else {
            restaurantDictionary[id] = restaurant;
        }
    }

    public JSONObject RetrieveCachedRestaurant (string id) {
        if (IsRestaurantCached (id)) {
            return restaurantDictionary[id];
        } else {
            return null;
        }
    }
    #endregion


    #region Dish
    public bool IsDishCached (string dishID) {
        return dishDictionary.ContainsKey (dishID);
    }

    public void CacheDish (string id, JSONObject dish) {
        if (!IsDishCached (id)) {
            dishDictionary.Add (id, dish);
            dishIDList.Add (id);
        } else {
            dishDictionary[id] = dish;
        }
    }
    public JSONObject RetrieveCachedDish (string id) {
        if (IsDishCached (id)) {
            return dishDictionary[id];
        } else {
            return null;
        }
    }
    #endregion
}
