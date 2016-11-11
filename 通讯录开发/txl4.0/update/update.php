<?php
$con = mysql_connect("localhost","root","");
if (!$con)
{
    die('Could not connect: ' . mysql_error());
}

mysql_select_db("txl_db", $con);

mysql_query("UPDATE Persons SET Name = '$_POST[name]'
WHERE id = '$_POST[id]'");

mysql_query("UPDATE Persons SET Gender = '$_POST[gender]'
WHERE id = '$_POST[id]'");

mysql_query("UPDATE Persons SET Age = '$_POST[age]'
WHERE id = '$_POST[id]'");

mysql_query("UPDATE Persons SET Tel = '$_POST[tel]'
WHERE id = '$_POST[id]'");

mysql_query("UPDATE Persons SET Email = '$_POST[email]'
WHERE id = '$_POST[id]'");

echo "<p>修改成功！</p>";

/* 

if (mysql_query("UPDATE Persons SET Name = '$_POST[name]' WHERE id = '$_POST[id]'"))
{
    die('Error: ' . mysql_error());
}
else
{
    echo "<p>姓名修改成功！</p><br />";
}

if (mysql_query("UPDATE Persons SET Age = '$_POST[age]' WHERE id = '$_POST[id]'"))
{
    die('Error: ' . mysql_error());
}
else
{
    echo "<p>年龄修改成功！</p><br />";
}

if (mysql_query("UPDATE Persons SET Gender = '$_POST[gender]' WHERE id = '$_POST[id]'"))
{
    die('Error: ' . mysql_error());
}
else
{
    echo "<p>性别修改成功！</p><br />";
}

if (mysql_query("UPDATE Persons SET Tel = '$_POST[tel]' WHERE id = '$_POST[id]'"))
{
    die('Error: ' . mysql_error());
}
else
{
    echo "<p>电话修改成功！</p><br />";
}

if (mysql_query("UPDATE Persons SET Email = '$_POST[email]' WHERE id = '$_POST[id]'"))
{
    die('Error: ' . mysql_error());
}
else
{
    echo "<p>邮箱修改成功！</p><br />";
}

*/

mysql_close($con);
?>