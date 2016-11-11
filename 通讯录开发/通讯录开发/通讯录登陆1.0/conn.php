<?php
/*********************
      数据库连接
*********************/

$conn = @mysql_connect('localhost','root','');

if(!$conn){
	die ("数据连接失败：" . mysql_error());
}


?>