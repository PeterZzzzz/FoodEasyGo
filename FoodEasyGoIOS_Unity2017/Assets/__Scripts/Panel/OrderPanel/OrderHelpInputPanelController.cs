using System.Collections;
using System.Collections.Generic;
using LDFW;
using LDFW.Network;
using UnityEngine;
using UnityEngine.UI;

public class OrderHelpInputPanelController : BasePanelController {

    public static OrderHelpInputPanelController instance;
    private int helpType;
    private string customerIssue;
    public TextController descriptionTextView;
    public TextController nameLabel;
    public TextController contactMethodLabel;
    public TextController orderNumLabel;
    public TextController descriptionLabel;
    public InputField nameInputField;
    public InputField contactMethodInputField;
    public InputField orderNumInputField;
    public InputField descriptionInputField;
    public Button submitBtn;
    public Image customerServiceImage;
    private string subOrderID;


    new void Awake()
    {
        if (instance != null)
        {
            instance.gameObject.DestroyGO();
        }
        instance = this;

        base.Awake();

    }

    public void OpenPanel(int type, string orderID)
    {
        helpType = type;
        subOrderID = orderID;
        base.OpenPanel();

        switch(helpType){
            case 1:
                customerIssue = "漏餐";
                headerTitle.ResetUI("漏餐", "Missing Items");
                descriptionTextView.GetComponent<TextController>().ResetUI("请在下方注明漏送给您的餐点，我们将会直接退款给您。","Please enter the missing items below and we can make adjustments accordingly.");
                nameLabel.gameObject.SetActive(true);
                contactMethodLabel.gameObject.SetActive(true);
                orderNumLabel.gameObject.SetActive(true);
                descriptionLabel.gameObject.SetActive(true);
                nameInputField.gameObject.SetActive(true);
                contactMethodInputField.gameObject.SetActive(true);
                orderNumInputField.gameObject.SetActive(true);
                descriptionInputField.gameObject.SetActive(true);
                submitBtn.gameObject.SetActive(true);
                customerServiceImage.gameObject.SetActive(false);

                break;
            case 2:
                customerIssue = "送错餐";
                headerTitle.ResetUI("送错餐", "Incorrect Items");
                descriptionTextView.GetComponent<TextController>().ResetUI("如果是整单送错，请在下方注明您收到错误的餐品内容，如包装上有订单号码也请注明，同时注明您需要重新配送还是全额退款。", "Please describe the wrong items you have received together with 4-digit order numbers outside the bag and specify whether you want full refund or re-delivery.");
                nameLabel.gameObject.SetActive(true);
                contactMethodLabel.gameObject.SetActive(true);
                orderNumLabel.gameObject.SetActive(true);
                descriptionLabel.gameObject.SetActive(true);
                nameInputField.gameObject.SetActive(true);
                contactMethodInputField.gameObject.SetActive(true);
                orderNumInputField.gameObject.SetActive(true);
                descriptionInputField.gameObject.SetActive(true);
                submitBtn.gameObject.SetActive(true);
                customerServiceImage.gameObject.SetActive(false);

                break;
            case 3:
                customerIssue = "更改地址";
                headerTitle.ResetUI("更改地址", "Change Address");
                descriptionTextView.GetComponent<TextController>().ResetUI("如果您输错了地址，可以在下方输入您正确的地址，我们的客服人员会及时为您更改。（注意：更改后的地址有可能需要额外收取外送费差额或不在此餐馆的服务范围，如遇此情况，我们将会以邮件形式通知您）", "If you enter the wrong delivery address by accident, please enter your order number below and the updated delivery address, we will update it for you.(Please be advised that the updated delivery address may be charged for extra delivery fees or may not be covered by delivery range, we will notify you via email if it happens.)");
                nameLabel.gameObject.SetActive(true);
                contactMethodLabel.gameObject.SetActive(true);
                orderNumLabel.gameObject.SetActive(true);
                descriptionLabel.gameObject.SetActive(true);
                nameInputField.gameObject.SetActive(true);
                contactMethodInputField.gameObject.SetActive(true);
                orderNumInputField.gameObject.SetActive(true);
                descriptionInputField.gameObject.SetActive(true);
                submitBtn.gameObject.SetActive(true);
                customerServiceImage.gameObject.SetActive(false);

                break;
            case 4:
                customerIssue = "取消订单";
                headerTitle.ResetUI("取消订单", "Cancel Order");
                descriptionTextView.GetComponent<TextController>().ResetUI("一般下单完成，所有的订单经餐馆确认后，我们将无法取消。", "Order can be cancelled only before restaurant accepts the order. ");
                nameLabel.gameObject.SetActive(false);
                contactMethodLabel.gameObject.SetActive(false);
                orderNumLabel.gameObject.SetActive(false);
                descriptionLabel.gameObject.SetActive(false);
                nameInputField.gameObject.SetActive(false);
                contactMethodInputField.gameObject.SetActive(false);
                orderNumInputField.gameObject.SetActive(false);
                descriptionInputField.gameObject.SetActive(false);
                submitBtn.gameObject.SetActive(false);
                customerServiceImage.gameObject.SetActive(false);

                break;
            case 5:
                customerIssue = "餐点质量问题";
                headerTitle.ResetUI("餐点质量问题", "Poor Quality of food");
                descriptionTextView.GetComponent<TextController>().ResetUI("非常抱歉您的餐点出现了问题 ！ 请您务必在下方描述餐品的问题，我们会第一时间向餐馆做出反馈避免将来同样的事情再次发生！", "We apologize for the food you have received didn’t satisfy you. Please describe the issue below. We will work with restaurant to make sure it will never happen again.");
                nameLabel.gameObject.SetActive(true);
                contactMethodLabel.gameObject.SetActive(true);
                orderNumLabel.gameObject.SetActive(true);
                descriptionLabel.gameObject.SetActive(true);
                nameInputField.gameObject.SetActive(true);
                contactMethodInputField.gameObject.SetActive(true);
                orderNumInputField.gameObject.SetActive(true);
                descriptionInputField.gameObject.SetActive(true);
                submitBtn.gameObject.SetActive(true);
                customerServiceImage.gameObject.SetActive(false);

                break;
            case 6:
                customerIssue = "";
                headerTitle.ResetUI("退款需要多久到账", "Refund");
                descriptionTextView.GetComponent<TextController>().ResetUI("如果您的订单有变更需要退款，我们将保证在7个工作日内完成退款。", "Refund will be issued within 7 business days. However, it may take up to 14 business day for bank to appear on your account balance.");

                nameLabel.gameObject.SetActive(false);
                contactMethodLabel.gameObject.SetActive(false);
                orderNumLabel.gameObject.SetActive(false);
                descriptionLabel.gameObject.SetActive(false);
                nameInputField.gameObject.SetActive(false);
                contactMethodInputField.gameObject.SetActive(false);
                orderNumInputField.gameObject.SetActive(false);
                descriptionInputField.gameObject.SetActive(false);
                submitBtn.gameObject.SetActive(false);
                customerServiceImage.gameObject.SetActive(false);

                break;
            case 7:
                customerIssue = "其他";
                headerTitle.ResetUI("其他", "Other");
                descriptionTextView.GetComponent<TextController>().ResetUI("如果您遇到了其他问题，请给我们留言，或直接联系我们的客服或饭店。", "If you experienced an issue that is not listed above, please enter below or add our Wechat: foodeasygo.");
                nameLabel.gameObject.SetActive(false);
                contactMethodLabel.gameObject.SetActive(false);
                orderNumLabel.gameObject.SetActive(false);
                descriptionLabel.gameObject.SetActive(true);
                nameInputField.gameObject.SetActive(false);
                contactMethodInputField.gameObject.SetActive(false);
                orderNumInputField.gameObject.SetActive(false);
                descriptionInputField.gameObject.SetActive(true);
                submitBtn.gameObject.SetActive(true);
                customerServiceImage.gameObject.SetActive(true);
                //Vector2 x = customerServiceImage.transform.position;
                //x.x -= 100f;
                //customerServiceImage.transform.position = x;

                break;
            

        }
        nameInputField.text = UserDataController.instance.firstName + " " + UserDataController.instance.lastName;
        contactMethodInputField.text = UserDataController.instance.email;
        orderNumInputField.text = subOrderID;
        descriptionInputField.text = "";

    }

    public void submitClick()
    {

        WWWForm form = new WWWForm();
        form.AddField("customer_issue", customerIssue);
        form.AddField("user_name", nameInputField.text);
        form.AddField("user_contact", contactMethodInputField.text);
        form.AddField("order_number", subOrderID);
        form.AddField("description", descriptionInputField.text);

        UserDataNetworkController.instance.SaveHelp(form,
        new LDFWServerResponseEvent((JSONObject data, string m) => {
            MessagePanelController.instance.DisplayPanel("Message has been sent");
        }), null);

        UserDataNetworkController.instance.SendEmail(form,
        new LDFWServerResponseEvent((JSONObject data, string m) => {
            MessagePanelController.instance.DisplayPanel("Message has been sent");
            PanelListController.instance.RemovePanel();
        }), null);
    }

    public void CheckForInputs()
    {
        if (string.IsNullOrEmpty(nameInputField.text) ||
            string.IsNullOrEmpty(contactMethodInputField.text) ||
            string.IsNullOrEmpty(descriptionInputField.text))
        {
            submitBtn.interactable = false;
        }
        else
        {
            submitBtn.interactable = true;
        }
    }

}
