using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;

using LDFW;


public class HomeRestaurantSectionElementController : MonoBehaviour, IPointerClickHandler {

    public string restaurantID;
    
    public void OnPointerClick (PointerEventData eventData) {
        RestaurantDetailPanelController.instance.OpenPanel (restaurantID);
    }
}
