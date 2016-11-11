<html>
<head>
	<title>insert contacts</title>
</head>
<body>
<h1>Insert Contacts</h1>
<?php
$contacts_name = $_POST['contacts_name'];
$contacts_sex = $_POST['contacts_sex'];
$contacts_tel = $_POST['contacts_tel'];
$contacts_email = $_POST['contacts_email'];

if (!$contacts_name || !$contacts_sex || !$contacts_tel || !$contacts_email){
	echo 'you have not entered all the required details.<br/>'
	    .'please go back and try again.';
	exit;
}

if (!get_magic_quotes_gpc()){
	$contacts_name = addslashes($contacts_name);
	$contacts_sex = addslashes($contacts_sex);
	$contacts_tel = addslashes($contacts_tel);
	$contacts_email = addslashes($contacts_email);	
}

@ $link = mysqli_connect('localhost','root','','tongxunlu');

if (mysqli_connect_errno()){
	echo 'Error:could not connect to database.please try again';
	exit;
}

$query = "insert into contacts_info values 
    ('$contacts_name','$contacts_sex','$contacts_tel','$contacts_email')";
		
$result = mysqli_query($link,$query);

if($result){
	echo 'contacts inserted into database.';
}

mysqli_close($link);
?>

</body>
</html>