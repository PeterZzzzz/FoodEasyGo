using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;
using System.Collections;
using System;

using LDFW;
using LDFW.Tween;
using LDFW.Network;


public class CartPanelDishBarController : MonoBehaviour, IPointerClickHandler {

    public Transform                generalParent;
    public ScrollRect               scrollRect;
    public LayoutElement            layoutElement;
    public Button                   selectButton;
    public Button                   deselectButton;

    public CartDetailData           cartDetailData;

    public bool                     isSelectedForCheckOut = true;
    public bool                     isShowingDeleteButton;
    public bool                     isRestaurantOpen;

    // Private and temp variables
    private bool                    isPointerDown = false;
    private bool                    isTweenerPlaying;
    private Vector2                 pointerDownPosition;

    


    void Awake () {
        layoutElement = GetComponent<LayoutElement> ();
        layoutElement.preferredHeight = 80;
        isSelectedForCheckOut = true;
    }
    
    public void ResetUI () {
        transform.Find ("GeneralParent/Title").GetComponent<TextController> ().ResetUI (
            cartDetailData._dishData._nameZH, cartDetailData._dishData._nameEN);
        transform.Find ("GeneralParent/Attribute").GetComponent<TextController> ().ResetUI (
            cartDetailData.GetAttributeNameListZH (), cartDetailData.GetAttributeNameListEN ());

        //transform.Find ("GeneralParent/Attributes").GetComponent<TextController> ().ResetUI (attributeStringZH, attributeStringEN);

        LDFWImageDownloadController.instance.AddToCacheList (new ImageDownloader2 (
                cartDetailData._dishData._imgURL.Replace ("\\/", "/"), "restaurant", transform.Find ("GeneralParent/RawImage").GetComponent<RawImage> (), 1, null, null));

        transform.Find ("GeneralParent/Quantity").GetComponent<TextController> ().ResetUI (cartDetailData._number.ToString ());
        transform.Find ("GeneralParent/Price").GetComponent<TextController> ().ResetUI ("$" + cartDetailData.GetTotalPrice ().ToString ("0.00"));

        if (!isRestaurantOpen) {
            isSelectedForCheckOut = false;
            deselectButton.interactable = selectButton.interactable = false;
            deselectButton.transform.localScale = Vector3.zero;
            return;
        }

        if (isSelectedForCheckOut) {
            OnSelectForCheckOutButtonClicked ();
        } else {
            OnDeselectForCheckOutButtonClicked ();
        }
    }

    public void OnMinusButtonClicked () {
        if (!isRestaurantOpen)
            return;

        if (cartDetailData._number > 1) {
            cartDetailData.IncreaseQuantity (-1);
            transform.Find ("GeneralParent/Quantity").GetComponent<TextController> ().ResetUI (cartDetailData._number.ToString ());
            transform.Find ("GeneralParent/Price").GetComponent<TextController> ().ResetUI ("$" + cartDetailData.GetTotalPrice ());

            transform.parent.GetComponent<CartPanelRestaurantBarController> ().CheckForMinOrder ();
            UpdateCartPanel ();
        }
    }

    public void OnPlusButtonClicked () {
        if (!isRestaurantOpen)
            return;

        cartDetailData.IncreaseQuantity (1);
        transform.Find ("GeneralParent/Quantity").GetComponent<TextController> ().ResetUI (cartDetailData._number.ToString ());
        transform.Find ("GeneralParent/Price").GetComponent<TextController> ().ResetUI ("$" + cartDetailData.GetTotalPrice ());

        transform.parent.GetComponent<CartPanelRestaurantBarController> ().CheckForMinOrder ();
        UpdateCartPanel ();
    }
    
    public void OnSelectForCheckOutButtonClicked() {
        isSelectedForCheckOut = true;
        deselectButton.interactable = selectButton.interactable = true;
        deselectButton.transform.localScale = Vector3.one;
        selectButton.transform.localScale = Vector3.zero;

        transform.parent.GetComponent<CartPanelRestaurantBarController> ().CheckForMinOrder ();
        UpdateCartPanel ();
    }
    
    public void OnDeselectForCheckOutButtonClicked() {
        isSelectedForCheckOut = false;
        deselectButton.interactable = selectButton.interactable = true;
        deselectButton.transform.localScale = Vector3.zero;
        selectButton.transform.localScale = Vector3.one;

        transform.parent.GetComponent<CartPanelRestaurantBarController> ().CheckForMinOrder ();
        UpdateCartPanel ();
    }

    private void UpdateCartPanel() {
        CartPanelController.instance.UpdateRestaurantStatus ();
        CartPanelController.instance.UpdateTitleBarInfo ();
        CartPanelController.instance.UpdatePayButtonStatus ();
    }

    public void OnPointerClick(PointerEventData eventData)
    {
        RestaurantDishDetailPanelController.instance.OpenPanel(cartDetailData);
        PanelListController.instance.removePanelAction = () =>
        {
            CartPanelController.instance.ReloadPanel();
        };
    }
}
