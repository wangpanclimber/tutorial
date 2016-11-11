<!DOCTYPE HTML>
<html>
<head>
<link type="text/css" rel="stylesheet" href="allpeoplestyle.css"/>
<meta http-equiv="Content-Type" content="text/html; charset=utf-8">
</head>
<body>
<?php
$con = mysql_connect("localhost","root","");
if (!$con)
{
    die('Could not connect: ' . mysql_error());
}

mysql_select_db("txl_db", $con);

if (!mysql_query("DELETE FROM Persons WHERE ID='$_POST[id]'",$con))
{
    die('Error: ' . mysql_error());
}
else
{
    echo "<p>删除成功！</p>";
}

mysql_close($con);
?>
</body>

</html>