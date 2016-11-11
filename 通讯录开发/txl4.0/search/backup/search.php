<?php
$con = mysql_connect("localhost","root","");
if (!$con)
{
    die('Could not connect: ' . mysql_error());
}

mysql_select_db("txl_db", $con);
$result = mysql_query("SELECT * FROM Persons
WHERE Name='$_POST[name]' and Gender='$_POST[gender]'");
?>


        <table width = "100%" border = "1">
            <tr>
                <th bgcolor="#CCCCC" scope="col">ID</th>
                <th bgcolor="#CCCCC" scope="col">姓名</th>
                <th bgcolor="#CCCCC" scope="col">性别</th>
            </tr>

        <?php
        while($row=mysql_fetch_row($result))
        {

        ?>
            <tr>
                <td><?php echo $row[0];?></td>
                <td><?php echo $row[1];?></td>
                <td><?php echo $row[2];?></td>
            </tr>

        <?php
        }
        mysql_close($con);
        ?>

        </table>

