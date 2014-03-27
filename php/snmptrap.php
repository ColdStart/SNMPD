<?php
	//include_once '/HighIO/www/domains/api.coldstart.io/snmptrap/libs/GCM.php';
	//include_once '/HighIO/www/domains/api.coldstart.io/snmptrap/libs/DB.php';
	
	date_default_timezone_set('Europe/London');
	$date = date('Y-m-d H:i:s');
	$text = "";
	$rawTrapData = array();
	$trapData = array();
	$x = 0;
	
	$bundleIDs = array();
	

	while (!feof(STDIN))
	{
		$buffer = fread(STDIN, 1024);
		$text .= $buffer;
	}
	
	$rawTrapData = explode("\n",$text);
	
	foreach($rawTrapData as $trapPayload)
	{
		if($x == 0)
		{
			//TRAP2, SNMP v2c, community 40d61ad6bfa553eca8956858ee9de462
			$Key = explode(" ",$trapPayload);	
			$trapData['key'] = $Key[4];
		}
	        else if($x == 1)
	        {
	                $trapData['source']['hostname'] = $trapPayload;
	        }
	        else if($x == 2)
	        {
	                preg_match( '/(\d{1,3}\.\d{1,3}\.\d{1,3}\.\d{1,3})/', $trapPayload, $IP);
	                $trapData['source']['ip'] = $IP[0];
	        }
	        else if($x == 3)
	        {
	                $trapData['uptime'] = $trapPayload;
	        }
	        else
	        {
	                $trapData['trapdetails'][] = $trapPayload;
	        }
	
	        $x++;  
	}
	
	$trapData['date'] = $date;
	
	//The API key for filtering who wants these
	/*$apiKey = $argv[1];
	
	$Query = "select gcm_regid,bundle from gcm_users where APIKey = \"$apiKey\"";
	$result = mysql_query($Query);
	
	while($row = mysql_fetch_assoc($result))
	{
		if($row['bundle'] == true)
		{
			$bundleIDs[$row['gcm_regid']]['payload'] = json_encode($trapData);
		}
		else
		{
			$GCMIDs[] = $row['gcm_regid'];
		}
	}
	
	//Bundle up
	foreach($bundleIDs as $gcm => $payload)
	{
		$storedPayload = array();
		$storedPayload = json_decode($memcache->get($gcm),true);
		$storedPayload[] = $payload;
		
		$memcache->set($gcm,json_encode($storedPayload));
	}
	
	//Now send the data to the real time recipiants
	$payload = json_encode($trapData);
	
	$message = array("alertCount" => 1,
					'alertSeverity' => 5,
					"alertType" => 0,
					"payload" => $payload);
	
	$result = $gcm->send_notification($GCMIDs, $message);
	*/
	
	//foreach($trapData as $key=>$value) { $fields_string .= $key.'='.$value.'&'; }
	//rtrim($fields_string, '&');
	
	$jsonPayload = json_encode($trapData);

	//open connection
	$ch = curl_init();

	//set the url, number of POST vars, POST data
	curl_setopt($ch,CURLOPT_URL, "http://api.coldstart.io/1/receivetrap.php");
	curl_setopt($ch,CURLOPT_POST, 1);
	curl_setopt($ch,CURLOPT_POSTFIELDS, "json=$jsonPayload");

	//execute post
	$result = curl_exec($ch);

	//close connection
	curl_close($ch);
