<?php
$con = mysql_connect("localhost","root","");
if (!$con)
{
    die('Could not connect: ' . mysql_error());
}

if (mysql_query("CREATE DATABASE my_db",$con))
{
    echo "Database created";
}
else
{
    echo "Error creating database: " . mysql_error();
}

mysql_select_db("txl_db", $con);
$sql = "CREATE TABLE Persons
(
ID int NOT NULL AUTO_INCREMENT,
PRIMARY KEY(ID),
Name varchar(15),
Gender varchar(15),
Age int,
Tel varchar(15),
Email varchar(30)
)";


mysql_close($con);
?>