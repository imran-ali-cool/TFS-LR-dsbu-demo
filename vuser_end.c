vuser_end()
{
	
	lr_start_transaction("1_transaction_logout");

	web_reg_find("Text=JPetStore Demo", 
		LAST);

	web_url("Sign Out", 
		"URL=https://petstore.octoperf.com/actions/Account.action?signoff=", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://petstore.octoperf.com/actions/Catalog.action", 
		"Snapshot=t38.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("Accept-Language", 
		"en-US,en;q=0.9");

	web_custom_request("upload_2", 
		"URL=https://google.com/domainreliability/upload", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/javascript", 
		"Referer=", 
		"Snapshot=t39.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"entries\":[{\"failure_data\":{\"custom_error\":\"net::ERR_ABORTED\"},\"http_response_code\":200,\"network_changed\":true,\"protocol\":\"SPDY\",\"request_age_ms\":1093465,\"request_elapsed_ms\":858,\"sample_rate\":1.0,\"server_ip\":\"\",\"status\":\"aborted\",\"url\":\"https://google.com/domainreliability/upload\",\"was_proxied\":false},{\"http_response_code\":200,\"network_changed\":false,\"protocol\":\"HTTPS\",\"request_age_ms\":74354,\"request_elapsed_ms\":7031,\"sample_rate\":0.05,\""
		"server_ip\":\"192.168.43.94:8888\",\"status\":\"ok\",\"url\":\"https://play.google.com/\",\"was_proxied\":true}],\"reporter\":\"chrome\"}", 
		LAST);

	lr_end_transaction("1_transaction_logout",LR_AUTO);
	return 0;
}
