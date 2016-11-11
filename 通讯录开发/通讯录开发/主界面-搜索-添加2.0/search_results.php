<html>
<head>
	<title>tongxunlu search results</title>
</head>
<body>
<h1> search results</h1>
<?php

$searchterm=$_POST['searchterm'];
$searchterm= trim($searchterm);

if (!$searchterm){
	echo 'you have not entered search details. please go back and try again.';
	exit;
}

if (!get_magic_quotes_gpc()){
	$searchterm = addslashes($searchterm);
}



@ $link = mysqli_connect("localhost","root","","tongxunlu");

if (mysqli_connect_errno()){
	echo 'Error: Could not connect to database. please try again later';
	exit;
}

$query = "select * from contacts_info where contacts_name = '$searchterm'";
$result = mysqli_query($link, $query);

if ($result){
	echo " result:";
}

while($row = mysqli_fetch_array($result,MYSQL_NUM)){
	printf("%s   %s  %s  %s",$row[0],$row[1],$row[2],$row[3],$row[4]);
}

mysqli_free_result($result);
mysqli_close($link);
?>

</body>
</html>

