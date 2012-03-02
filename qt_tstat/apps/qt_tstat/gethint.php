<?php

//get the q parameter from URL
$q=$_GET["q"];


       

$file = fopen("remotecont", "w") or exit("Unable to open file!");
//Output a line of the file until the end is reached
fwrite($file,$q);
fclose($file);
$response=$q;
//output the response
echo $response;
?>
