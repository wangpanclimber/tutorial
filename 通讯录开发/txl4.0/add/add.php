<?php
$con = mysql_connect("localhost","root","");
if (!$con)
{
    die('Could not connect: ' . mysql_error());
}

mysql_select_db("txl_db", $con);
$sql = "INSERT INTO Persons (Name, Gender, Age, Tel, Email)
VALUES
('$_POST[name]','$_POST[gender]','$_POST[age]','$_POST[tel]','$_POST[email]')";

if (!mysql_query($sql,$con))
{
    die('Error: ' . mysql_error());
}
else
{
    echo "<p>添加成功！</p>";
}

mysql_close($con);
?>