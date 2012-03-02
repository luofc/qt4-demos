<html xmlns="http://www.w3.org/1999/xhtml" lang="en" xml:lang="en">
<head>
<meta http-equiv="refresh" content="5;url=index.php">
<script type="text/javascript">
function showHint(str)
{
if (window.XMLHttpRequest)
  {// code for IE7+, Firefox, Chrome, Opera, Safari
  xmlhttp=new XMLHttpRequest();
  }
else
  {// code for IE6, IE5
  xmlhttp=new ActiveXObject("Microsoft.XMLHTTP");
  }
xmlhttp.onreadystatechange=function()
  {
  if (xmlhttp.readyState==4 && xmlhttp.status==200)
    {
    document.getElementById("setpointvalue").innerHTML=xmlhttp.responseText;
    }
  }

xmlhttp.open("GET","gethint.php?q="+str,true);
xmlhttp.send();
}
// Reload Divs
/*
function Ajax(){
var xmlHttp;
	try{	
		xmlHttp=new XMLHttpRequest();// Firefox, Opera 8.0+, Safari
	}catch (e){
		try{
			xmlHttp=new ActiveXObject("Msxml2.XMLHTTP"); // Internet Explorer
		}catch (e){
		    try{
				xmlHttp=new ActiveXObject("Microsoft.XMLHTTP");
			}catch (e){
				alert("No AJAX!?");
				return false;
			}
		}
	}
	xmlHttp.onreadystatechange=function(){
		document.getElementById('contentcolumn').innerHTML=xmlHttp.responseText;
		setTimeout('Ajax()',3000);
	}
	xmlHttp.open("GET","refreshcenter.php",true);
	xmlHttp.send(null); 
}
window.onload=function(){
	setTimeout('Ajax()',3000);
}*/


</script>


<title>TSTAT REMOTE </title>
<style type="text/css">

body{
margin:0;
padding:0;
line-height: 1.5em;
background: #151B54;
}

b{font-size: 110%;}
em{color: red;}

#topsection{
background: #151B54;
height: 90px; /*Height of top section*/
color: white;
}

#topsection h1{
margin: 0;
padding-top: 15px;
}

#contentwrapper{
float: left;
width: 100%;
background: white;
}

#contentcolumn{
margin: 0 200px 0 230px; /*Margins for content column. Should be "0 RightColumnWidth 0 LeftColumnWidth*/
}

#leftcolumn{
float: left;
width: 230px; /*Width of left column*/
margin-left: -100%;
background: white;
}

#rightcolumn{
float: left;
width: 250px; /*Width of right column*/
margin-left: -250px; /*Set left marginto -(RightColumnWidth)*/
background: white;


}

#footer{
clear: left;
width: 100%;
background: #151B54;
color: #FFF;
text-align: center;
padding: 4px 0;
}

#footer a{
color: #FFFF80;
}

.innertube{
margin: 10px; /*Margins for inner DIV inside each column (to provide padding)*/
margin-top: 0;
}

</style>
</head>

<?php 

	
	
	

 	
	echo "<body>";
	echo "<div id='maincontainer'>";
	echo "<div id='topsection'><div class='innertube'><h1><center>TSTAT REMOTE DEMO</center></h1></div></div>";
	//echo "<div id='horzmiddlewrapper>";	
	echo "<div id='contentwrapper'>";
	echo "<div id='contentcolumn'>";


	$file = fopen("thetemp", "r") or exit("Unable to open file!");
	//Output a line of the file until the end is reached
	$date = fgets($file);
	$time = fgets($file);
	$temp = fgets($file);
	$setpoint = fgets($file);
	$fansettings = fgets($file);
	fclose($file);
//<!-- Center Readout-->

	echo "<center><div class='innertube'><br></div>";

	echo "<font size='5' face='arial' color='#151B54'>";
	echo "<p id='demo'>$date</p>";
	echo "<p id='time'>$time</p>";

	//echo "<p> $fansettings </p>";

	echo "</font>";
	echo "<p id='ttemp'><b><font size='14' face='arial' color='#151B54'>$temp</font></b></p>";
	
	
		

?>
<p>Current Temp
<br><br>
<img src='appimages/logo.png' alt='Logo' width='200' height='50' /> 


<br><br>
</center>
</div>
</div>






<!-- Temp SETTINGS -->
<div id='rightcolumn'>
<center>
<br><br>
<div class='innertube'><b>Temp Settings</b> <script type='text/javascript'></script></div>
<p>Set point:
<?php
	echo "<p id='setpointvalue'>$setpoint</p>";
	echo " <FORM ACTION='index.php' method='post'>";
	echo "<p><button type='SUBMIT' onclick='showHint( ($setpoint+1) )' >&nbsp Up &nbsp</button>";
	echo "<br><button type='SUBMIT' onclick='showHint( ($setpoint-1) )'>Down</button>";
	echo "</form>";
?>
</center>
</div>

<!-- FAN SETTINGS-->
<div id='leftcolumn'>
<center>
<br><br>
<div class='innertube'><b>Fan Settings</b> 
</div>
<br>
<FORM ACTION='index.php' method="post">

<INPUT TYPE='RADIO' NAME='fansettings' id='auto' value='auto' />Auto<BR>
<INPUT TYPE='RADIO' NAME='fansettings' id='high' value='high' />High<BR>
<INPUT TYPE='RADIO' NAME='fansettings' id='low'  value='low' />Low<BR>
<INPUT TYPE='RADIO' NAME='fansettings' id='off'  value='off' />Off<P>
<!-- use this to set defult CHECKED-->
<INPUT TYPE=SUBMIT VALUE='submit' />
</FORM>

<?php
	//echo $_POST["fansettings"];
	$newfansetting = $_POST["fansettings"];
	if ($newfansetting != "" )
	{
		$fansettings = $newfansetting;
		$file = fopen("remotecont", "w") or exit("Unable to open file!");
		//Output a line of the file until the end is reached
		fwrite($file,$setpoint);
		fwrite($file,$newfansetting);
		fclose($file);
		$trimmedup = trim($fansettings, "\n");
		echo "<script type='text/javascript'>document.getElementById('$trimmedup').checked=true</script>";
		$waitfirst = 1;
	}
	else	
	{
		$waitfirst = 0;
	}

	if ($waitfirst == "0")
	{
		$file = fopen("thetemp", "r") or exit("Unable to open file!");
		//Output a line of the file until the end is reached
		$date = fgets($file);
		$time = fgets($file);
		$temp = fgets($file);
		$setpoint = fgets($file);
		$fansettings = fgets($file);
		fclose($file);
		$trimmedup = trim($fansettings, "\n");
		echo "<script type='text/javascript'>document.getElementById('$trimmedup').checked=true</script>";
	}

	
	


?>

</div>

</center>


<div id='footer'>created by LT Thomas</div>

</div>
</body>
</html>


