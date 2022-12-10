cat()
{
	lr_think_time(5);
	lr_start_transaction("1_transaction_cat");  //---------------------cat------------------------//

	web_reg_find("Text=JPetStore Demo", 
		LAST);

	

	web_url("sm_cats.gif", 
		"URL=https://petstore.octoperf.com/actions/Catalog.action?viewCategory=&categoryId=CATS", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://petstore.octoperf.com/actions/Catalog.action", 
		"Snapshot=t34.inf", 
		"Mode=HTML", 
		LAST);

	web_reg_find("Text=JPetStore Demo", 
		LAST);

	web_url("Return to Main Menu_3", 
		"URL=https://petstore.octoperf.com/actions/Catalog.action", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://petstore.octoperf.com/actions/Catalog.action?viewCategory=&categoryId=CATS", 
		"Snapshot=t35.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("1_transaction_cat",LR_AUTO);
	return 0;
}
