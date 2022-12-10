strtok_Function()
{
// !!!Basic c calcution and function ae below !!!

//int ali=3;int mv=10;int sum= ali*mv;
// 	lr_message("%d",sum);
// if(sum>30)
// 	lr_message("it is more");
//
// else lr_message("it is  not eQUAL");
// 
// 	if(sum>70) lr_message("it is BEyon");
// 	for(ali=3;ali<=5;ali++){lr_message(" ali value is %d",ali);
// 		if(ali>5){lr_message(" ali value is greater thaan %d",ali);
// 		}
// 	}
//!!!!string tokenizer example in below !!!!
//step1.taken char varble  and named as token
//step2.taken lrsavesrting to save the data into a varble called city
//step3.used typecasting ,strtok,lrevalstring and delimiter in the varble token 
//step4.teaken lrsavesrting and defined data in new name token1
//step5.same as step4

char *token;
lr_save_string("greenland:loiusville:washigtonDC","city");
token=(char*)strtok(lr_eval_string("{city}"),":");
lr_save_string(token,"token1");
token=(char*)strtok(NULL,":");
lr_save_string(token,"token2");
lr_output_message(lr_get_host_name());
lr_output_message(lr_get_vuser_ip());
//------------------------------------------------------------------------------------
lr_start_transaction("fa01_ab_({diffren_dogs}");

lr_think_time(02);

lr_end_transaction("fa01_ab_{diffren_dogs}", LR_AUTO);






 /* lr_save_string("777","textParam");
    lr_output_message ( "textParam value:% s", lr_eval_string ( "{textParam}")); */ 

    return 0;


}

