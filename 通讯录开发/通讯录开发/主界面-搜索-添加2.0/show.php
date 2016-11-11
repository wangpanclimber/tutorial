<?php 
/**显示数据库的内容**/
@ $link = mysqli_connect("localhost","root","","tongxunlu");

if (mysqli_connect_errno()){
	echo 'Error: Could not connect to database. please try again later';
	exit;
}

$query = "select * from contacts_info";
$result = mysqli_query($link, $query);
?>


<!---创建一个表格--->
<table width = "100%" border = "1">
    <tr>
	    <th bgcolor="#CCCCC" scope="col">contacts_name</th>
	    <th bgcolor="#CCCCC" scope="col">contacts_sex</th>
		<th bgcolor="#CCCCC" scope="col">contacts_tel</th>
		<th bgcolor="#CCCCC" scope="col">contacts_email</th>
	</tr>

<?php
while($row=mysqli_fetch_row($result))    /***why?***/
{

?>
	<tr>
	    <td><?php echo $row[0];?></td>
		<td><?php echo $row[1];?></td>
		<td><?php echo $row[2];?></td>
		<td><?php echo $row[3];?></td>
	</tr>

<?php
}
?>

</table>
