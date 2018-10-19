using UnityEngine;
using UnityEngine.UI;
using System;
using System.Collections;
using System.Collections.Generic;

using LDFW;
using LDFW.UI;
using LDFW.Network;

using Debug = UnityEngine.Debug;

public class RestaurantDishDetailPanelController : BasePanelController
{

	public static RestaurantDishDetailPanelController instance;

	public RestaurantDetailPanelDishBarController dishBarController;
	public string dishID;
	public string cartDetailID;


	// Transforms
	public ScrollRect contentScrollRect;
	public TextController pageTitle;
	public RectTransform topSection;
	public RectTransform bottomSection;
	public RawImage dishImage;
	public TextController dishDetail;
	public TextController priceText;
	public TextController selectedText;
	public TextController dishDescription;
	public TextController deliveryText;
	public InputField noteInputField;
    public RectTransform footerRect;


	// Prefabs
	public GameObject toggleParentPrefab;
	public GameObject toggleElementPrefab;


	// Others
	private List<RestaurantDishDetailAttributeToggleParentController> attributeList;
	private CartDetailData cartDetailData;


	// Temp variables
	private List<GameObject> tempList;
	private string currentCategoryID;




	protected new void Awake()
	{
		if (instance != null)
		{
			instance.gameObject.DestroyGO();
		}
		instance = this;

		base.Awake();

		cartDetailData = null;
		tempList = new List<GameObject>();

        if (Screen.width == 1125 || Screen.width == 1242 || Screen.width == 828)
        {
            // iPhoneX
            contentScrollRect.GetComponent<RectTransform>().offsetMin = new Vector2(contentScrollRect.GetComponent<RectTransform>().offsetMin.x, contentScrollRect.GetComponent<RectTransform>().offsetMin.y + 20);

            Vector2 pos = footerRect.position;
            pos.y += 20;
            footerRect.position = pos;
            Debug.Log("iPhoneX适配12");

        }
	}


	#region Overrides

	public override void ResetPanel()
	{
		topSection.Find("Image").GetComponent<RawImage>().texture = null;
        topSection.Find("Detail").GetComponent<TextController>().ResetUI("");
		topSection.Find("Price").GetComponent<TextController>().ResetUI("");

		//selectedText.ResetUI ("已选: ", "Selected: ");
		//dishDescription.ResetUI ("");
		noteInputField.text = "";

		RectTransform content = topSection.parent as RectTransform;
		bottomSection.SetAsFirstSibling();
		topSection.SetAsFirstSibling();
		content.DestroyAllChildrenAfterSiblingIndex(1);

		while (tempList.Count > 0)
		{
			tempList[0].DestroyGO();
			tempList.RemoveAt(0);
		}
	}

	/// <summary>
	/// Load data from server
	/// </summary>
	public override void ReloadPanel()
	{

		LDFWWWWForm form = new LDFWWWWForm();
		form.AddField("dish_id", dishID);
		LoadingPanelController.instance.OpenPanel();
		RestaurantNetworkController.instance.GetRestaurantDishDetail(
			form.wwwForm,
			new LDFWServerResponseEvent((JSONObject data, string m) =>
				{
					LoadingPanelController.instance.HidePanelImmediately();
					StartCoroutine(LoadDishDetailData(data));
				}),
			new LDFWServerResponseEvent((JSONObject data, string m) =>
				{
					LoadingPanelController.instance.HidePanelImmediately();
				}));

	}

	public override void OpenPanel()
	{
		Debug.LogError("OpenPanel() should not be called");
	}

	public void OpenPanel(string dishID, string cartDetailID, RestaurantDetailPanelDishBarController bar)
	{

		currentCategoryID = string.IsNullOrEmpty(RestaurantPanelController.instance.deliveryTimeID) ? "1" : "2";
		currentCategoryID = bar.isRestaurant ? currentCategoryID : "4";
		dishBarController = bar;

		this.dishID = dishID;
		this.cartDetailID = cartDetailID;

		//UpdateDeliveryText();

		base.OpenPanel();
	}

	public void OpenPanel(CartDetailData data)
	{
		cartDetailData = data;
		currentCategoryID = data._categoryID;
		dishBarController = Instantiate(Resources.Load("RestaurantDetailPanel/DishPrefab") as GameObject).GetComponent<RestaurantDetailPanelDishBarController>();
		dishBarController.Reset(data._dishData._imgURL, data._restaurantID, data._dishData._id, data._goodsTypeID, data._number, data._dishData._nameZH, data._dishData._nameEN, data._dishData._price.ToString(), "0");
		tempList.Add(dishBarController.gameObject);
		dishBarController.transform.localScale = Vector3.zero;

		dishID = data._dishData._id;
		cartDetailID = data._id;

		//UpdateDeliveryText();


		base.OpenPanel();
	}

	public void OpenPanel(int index, string groceryID, string cartDetailID, GroceryPanelGroceryBarElementController groceryBar)
	{
		currentCategoryID = "3";
		dishBarController = Instantiate(Resources.Load("RestaurantDetailPanel/DishPrefab") as GameObject).GetComponent<RestaurantDetailPanelDishBarController>();
		if (index == 1)
		{
			dishBarController.Reset(groceryBar._imageURL1, groceryBar._restaurant1ID, groceryBar._grocery1ID, "", 1, groceryBar._nameZH1, groceryBar._nameEN1, groceryBar._price1, "0");
		}
		else if (index == 2)
		{
			dishBarController.Reset(groceryBar._imageURL2, groceryBar._restaurant2ID, groceryBar._grocery2ID, "", 1, groceryBar._nameZH2, groceryBar._nameEN2, groceryBar._price2, "0");
		}

		tempList.Add(dishBarController.gameObject);
		dishBarController.transform.localScale = Vector3.zero;

		this.dishID = groceryID;
		this.cartDetailID = cartDetailID;

		//UpdateDeliveryText();

		base.OpenPanel();
	}

	public void OpenPanel(string dishID)
	{

	}

	public override void HidePanelImmediately()
	{
		//CartController.instance.cart.SyncWithServer ();
		base.HidePanelImmediately();
	}

	#endregion


	#region LoadingData

	private IEnumerator LoadDishDetailData(JSONObject data)
	{
		RectTransform content = topSection.parent as RectTransform;

		pageTitle.ResetUI(data.GetField("name").str, data.GetField("name_en").str);
		LDFWImageDownloadController.instance.AddToCacheList(
			new ImageDownloader2(data.GetField("img").str.Replace("\\/", "/"), "restaurant", dishImage, 3,
				() =>
				{
					//Vector2 imageFrameSize = new Vector2(dishImage.rectTransform.rect.width, dishImage.rectTransform.rect.height);
					//Vector2 rawImageSize = new Vector2(dishImage.texture.width, dishImage.texture.height);
					//Debug.Log ("Image size: " + imageFrameSize.ToString () + ", " + rawImageSize.ToString ());
					//dishImage.rectTransform.rect.Set(0, 0, rawImageSize.x / rawImageSize.y * imageFrameSize.y, imageFrameSize.y);
					//dishImage.rectTransform.rect.Set (0, 30, rawImageSize.x / rawImageSize.y * 200, 200);
				}, null));

        dishDetail.ResetUI("菜品详情: " + data.GetField("describe").str, "Dish details: " + data.GetField("describe_en").str);
		priceText.ResetUI("$" + data.GetField("price").str);
		//selectedText.ResetUI ("已选: ", "Selected: ");
		//dishDescription.ResetUI (data.GetField ("describe").str, data.GetField ("describe_en").str);
		yield return null;

		//topSection.GetComponent<LayoutElement> ().preferredHeight = 500 + (dishDescription.transform as RectTransform).sizeDelta.y;

		//yield return null;

		attributeList = new List<RestaurantDishDetailAttributeToggleParentController>();
		JSONObject attributeData = data.GetField("attribute");
		if (attributeData != null && attributeData.Count > 0)
		{
			for (int i = 0; attributeData[i] != null; i++)
			{
				int leastAmount = int.Parse(attributeData[i].GetField("least").str);
				int mostAmount = int.Parse(attributeData[i].GetField("most").str);

				Transform toggleParent = Instantiate(toggleParentPrefab).transform;
				toggleParent.SetParent(content);
				toggleParent.localScale = Vector3.one;
				toggleParent.name = "ToggleParent";

				RestaurantDishDetailAttributeToggleParentController toggleParentController = toggleParent.GetComponent<RestaurantDishDetailAttributeToggleParentController>();
				toggleParentController.onSelectEvent.AddListener(RefreshSelectedAttributesText);
				attributeList.Add(toggleParentController);

				toggleParentController.isSingleSelect = attributeData[i].GetField("is_single").str == "1";
				toggleParentController.isMust = attributeData[i].GetField("is_must").str == "1";
				toggleParentController.canSelectQuantity = attributeData[i].GetField("custom_amount").str == "1";
				toggleParentController.leastAmount = leastAmount;
				toggleParentController.mostAmount = mostAmount;


				string isSingleText = "单选";
				string isSingleTextEn = "Single";
				if (!toggleParentController.isSingleSelect)
				{
					isSingleText = "多选";
					isSingleTextEn = "Multiple";
				}

				string titleZH = attributeData[i].GetField("title").str + " (" + isSingleText + ")";
				string titleEN = attributeData[i].GetField("title_en").str + " (" + isSingleTextEn + ")";

				if (leastAmount > -1 && mostAmount > -1)
				{
					titleZH += " {" + leastAmount + " ~ " + mostAmount + ")";
					titleEN += " {" + leastAmount + " ~ " + mostAmount + ")";
				}

				toggleParentController.toggleParentID = attributeData[i].GetField("id").str;
				toggleParent.Find("Title").GetComponent<TextController>().ResetUI(titleZH, titleEN);

				JSONObject attributeListData = attributeData[i].GetField("detail_list");
				for (int j = 0; attributeListData[j] != null; j++)
				{
					Transform toggleElement = Instantiate(toggleElementPrefab).transform;
					toggleElement.SetParent(toggleParentController.toggleElementParent);
					toggleElement.localScale = Vector3.one;

					RestaurantDishDetailAttributeToggleElementController toggleElementController = toggleElement.GetComponent<RestaurantDishDetailAttributeToggleElementController>();
					toggleElementController.toggleID = attributeListData[j].GetField("id").str;
					toggleElementController.toggleController = toggleParentController;
					toggleElementController.canSelectQuantity = toggleParentController.canSelectQuantity;

					toggleElementController.price = float.Parse(attributeListData[j].GetField("price").str);
					toggleElementController.ResetUI(attributeListData[j].GetField("name").str, attributeListData[j].GetField("name_en").str);
				}

				if (toggleParentController.canSelectQuantity)
				{
					toggleParentController.toggleElementParent.GetComponent<GridLayoutGroup>().cellSize = new Vector2(100, 40);
				}
				else
				{
					toggleParentController.toggleElementParent.GetComponent<GridLayoutGroup>().cellSize = new Vector2(100, 40);
				}
				yield return null;
				toggleParent.GetComponent<LayoutElement>().preferredHeight = 
					(toggleParent.Find("Title") as RectTransform).sizeDelta.y + (toggleParentController.toggleElementParent as RectTransform).sizeDelta.y + 10;
			}
		}
		bottomSection.SetAsLastSibling();
		yield return null;
		UpdateDishDetailsBasedOnCart();
	}

	public void UpdateDishDetailsBasedOnCart()
	{
		if (string.IsNullOrEmpty(cartDetailID))
			return;
        
		cartDetailData = CartController.instance.SearchForCartDetailBasedOnCartDetailID(cartDetailID);
		if (cartDetailData != null)
		{
			RectTransform content = topSection.parent as RectTransform;
			foreach (KeyValuePair<string, AttributeData> pair in cartDetailData._attributeDic)
			{
				for (int i = 0; i < content.childCount; i++)
				{
					LDFWToggleController toggleController = content.GetChild(i).GetComponent<LDFWToggleController>();
					if (toggleController != null)
					{
						for (int j = 0; j < toggleController.toggleElementParent.childCount; j++)
						{
							LDFWToggleElementController currentToggleElementController = toggleController.toggleElementParent.GetChild(j).GetComponent<LDFWToggleElementController>();

							if (currentToggleElementController.toggleID == pair.Value._id)
							{
								toggleController.SelectToggle(j);
								(currentToggleElementController as RestaurantDishDetailAttributeToggleElementController).quantity = pair.Value._quantity;
								(currentToggleElementController as RestaurantDishDetailAttributeToggleElementController).UpdateUI();
							}
						}
					}
				}
			}
			bottomSection.Find("NoteInputField").GetComponent<InputField>().text = cartDetailData._notes;
			RefreshSelectedAttributesText();
		}
	}

	#endregion



	#region Other

	public void OnAddButtonClicked()
	{
		if (!CheckAttributeValidity())
			return;
		
		string attributeListString = "";
		string attributeQuantityList = "";
		Dictionary<string, AttributeData> attributeDic = new Dictionary<string, AttributeData>();
		RectTransform content = topSection.parent as RectTransform;
		for (int i = 0; i < content.childCount; i++)
		{
			LDFWToggleController toggleController = content.GetChild(i).GetComponent<LDFWToggleController>();
			if (toggleController != null)
			{
                if (!(toggleController as RestaurantDishDetailAttributeToggleParentController).CheckForAmountValidity())
                {
                    (toggleController as RestaurantDishDetailAttributeToggleParentController).DisplayInvalidMessageError();
                    return;
                }
				string[] selectedList = toggleController.GetSelectedElements().Split(',');
				foreach (string index in selectedList)
				{
					if (!string.IsNullOrEmpty(index))
					{
						RestaurantDishDetailAttributeToggleElementController elementController = toggleController.toggleElementParent.GetChild(int.Parse(index)).GetComponent<RestaurantDishDetailAttributeToggleElementController>();
						AttributeData attribute = new AttributeData(elementController.toggleID, elementController.price, elementController.quantity, elementController.text.textZH, elementController.text.textEN);
						if (attributeListString == "")
						{
							attributeListString = attribute._id;
							attributeQuantityList = attribute._quantity.ToString();
						}
						else
						{
							attributeListString = attributeListString + "," + attribute._id;
							attributeQuantityList = attributeQuantityList + "," + attribute._quantity.ToString();
						}
						attributeDic.Add(attribute._id, attribute);
					}
				}
			}
		}

		//Debug.Log ("attributeList = " + attributeList);
		//Debug.Log ("attributeQuantityList = " + attributeQuantityList);

		DishData dishData = new DishData(dishBarController._dishID, float.Parse(dishBarController._price), dishBarController._imgURL, dishBarController._nameZH, dishBarController._nameEN);


		if (string.IsNullOrEmpty(cartDetailID))
        //if (cartDetailData == null)
		{
			CartController.instance.AddToCart(currentCategoryID, RestaurantPanelController.instance.deliveryTimeID, dishBarController.grouponID, dishBarController.grouponGoodsID,
				dishBarController._restaurantID, RestaurantDetailPanelController.instance.restaurantNameZH, RestaurantDetailPanelController.instance.restaurantNameEN,
				dishBarController._dishID, dishBarController._dishTypeID, attributeListString, attributeQuantityList, bottomSection.Find("NoteInputField").GetComponent<InputField>().text, Mathf.Max(1, dishBarController._quantity), dishData, attributeDic);

			if (dishBarController._quantity == 0)
			{
				dishBarController._quantity = 1;
				dishBarController.ResetUI();
			}
		}
		else
		{
			cartDetailData.SetData(
				cartDetailData._categoryID, cartDetailData._deliverTimeID, cartDetailData._grouponID, cartDetailData._grouponGoodsID,
				dishBarController._dishID, dishBarController._dishTypeID, dishBarController._restaurantID, RestaurantDetailPanelController.instance.restaurantNameZH, RestaurantDetailPanelController.instance.restaurantNameEN,
				attributeListString, attributeQuantityList, bottomSection.Find("NoteInputField").GetComponent<InputField>().text, dishBarController._quantity, dishData, attributeDic);
		}

		ClosePanel();
		CartController.instance.cart.SyncWithServer();
	}

	public void RefreshSelectedAttributesText()
	{
		DebugLogger.Log("RefreshSelectedAttributresText is called");
		string textZH = "";
		string textEN = "";
		bool isFirst = true;
		foreach (var attr in attributeList)
		{
			for (int i = 0; i < attr.selectedList.Length; i++)
			{
				if (attr.selectedList[i])
				{
					TextController textController = attr.toggleElementParent.GetChild(i).Find("Text").GetComponent<TextController>();
					if (isFirst)
					{
						isFirst = false;
						textZH = textController.textZH;
						textEN = textController.textEN;
					}
					else
					{
						textZH = textZH + ", " + textController.textZH;
						textEN = textEN + ", " + textController.textEN;
					}
				}
			}
		}

		//selectedText.ResetUI ("已选: " + textZH, "Selected: " + textEN);
	}

	/*
    public void UpdateDeliveryText()
    {
        return;
        //Debug.Log ("UpdateDeliveryText: " + currentCategoryID);
        deliveryText.ResetUI("");

        if (currentCategoryID == "1")
        {
            deliveryText.ResetUI("配送时间: 即点即送", "Delivery Time: Upon order confirmed");

        }
        else if (currentCategoryID == "3")
        {
            bool isTomorrow = false;
            int hour = DateTime.Now.Hour;

            if (hour >= 15)
            {
                isTomorrow = true;
            }

            string timeZH = "", timeEN = "";

            if (isTomorrow)
            {
                timeZH = "明天 19:00 - 22:00";
                timeEN = "Tomorrow 19:00 - 22:00";
            }
            else
            {
                timeZH = "今天 19:00 - 22:00";
                timeEN = "Today 19:00 - 22:00";
            }

            deliveryText.ResetUI("配送时间: " + timeZH, "Delivery Time: " + timeEN);
        }
    }
    */

	public bool CheckAttributeValidity() {
		foreach (var attribute in attributeList)
		{
			int totalAmount = 0;
			for (int i=0; i<attribute.toggleElementParent.childCount; i++) 
			{
				RestaurantDishDetailAttributeToggleElementController toggleElement = attribute.toggleElementParent.GetChild(i).GetComponent<RestaurantDishDetailAttributeToggleElementController>();
				if (toggleElement.isToggleOn)
					totalAmount += toggleElement.quantity;
			}

			Debug.Log("Total amount = " + totalAmount);
			if (attribute.leastAmount >= 0 && attribute.mostAmount >= 0 && (totalAmount < attribute.leastAmount || totalAmount > attribute.mostAmount))
			{
				MessagePanelController.instance.DisplayPanel(attribute.transform.Find("Title").GetComponent<Text>().text + 
					" amount must be between " + attribute.leastAmount + " and " + attribute.mostAmount);

				return false;
			}
		}

		return true;
	}

	public void OnNoteInputFieldPointerDown()
	{
		contentScrollRect.normalizedPosition = new Vector2(0, 0);
	}

	#endregion


}
