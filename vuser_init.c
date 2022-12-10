vuser_init()
{
	
	web_set_sockets_option("SSL_VERSION", "TLS1.2");

	web_reg_find("Text=JPetStore Demo", 
		LAST);

	web_add_auto_header("Accept-Language", 
		"en-US");

	web_url("Catalog.action", 
		"URL=https://petstore.octoperf.com/actions/Catalog.action", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t26.inf", 
		"Mode=HTML", 
		LAST);

	/* Request with GET method to URL "https://petstore.octoperf.com/favicon.ico" failed during recording. Server response : 404*/
	lr_start_transaction("1_transaction_login");

	web_reg_find("Text=JPetStore Demo", 
		LAST);

	web_url("Sign In", 
		"URL=https://petstore.octoperf.com/actions/Account.action;jsessionid=A5E25313F676F2A342D2EDF50A2AC08C?signonForm=", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://petstore.octoperf.com/actions/Catalog.action", 
		"Snapshot=t27.inf", 
		"Mode=HTML", 
		LAST);

	/* Request with GET method to URL "https://petstore.octoperf.com/favicon.ico" failed during recording. Server response : 404*/

	web_reg_find("Text=JPetStore Demo", 
		LAST);

	web_submit_data("Account.action", 
		"Action=https://petstore.octoperf.com/actions/Account.action", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=https://petstore.octoperf.com/actions/Account.action;jsessionid=A5E25313F676F2A342D2EDF50A2AC08C?signonForm=", 
		"Snapshot=t28.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=username", "Value=hh", ENDITEM, 
		"Name=password", "Value=4832", ENDITEM, 
		"Name=signon", "Value=Login", ENDITEM, 
		"Name=_sourcePage", "Value=PrAYsfq9B3yBfh4cDamWxj3_IBnWLSGD8KtN1zfURpeQrb1CVf-uawJKeh12MdJ_R4v6UwT-4UoO4KKWmcT-KIa-zjhE3yqcypNMwcuVk7E=", ENDITEM, 
		"Name=__fp", "Value=_jp6GGUpqObNuXDSjKb41wFHpApY6RhTN4LWh-RZk5N4BB9aUtAtf5uephe_AFvY", ENDITEM, 
		LAST);

	lr_end_transaction("1_transaction_login",LR_AUTO);
	return 0;
}
