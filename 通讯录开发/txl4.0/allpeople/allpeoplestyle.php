<!DOCTYPE HTML>
<html>
<head>
<link type="text/css" rel="stylesheet" href="allpeoplestyle.css"/>
<meta http-equiv="Content-Type" content="text/html; charset=utf-8">
<title>所有人</title>
</head>

<body>
	<div id="allpeople">
        <?php 
        
        $con = mysql_connect("localhost","root","");

        if (!$con)
        {
            die('Could not connect: ' . mysql_error());
        }

        mysql_select_db("txl_db", $con);

        $query = "select * from Persons";
        $result = mysql_query($query, $con);
        ?>


        
        <table width = "100%" border = "1">
            <tr>
                <th bgcolor="#CCCCC" scope="col">ID</th>
                <th bgcolor="#CCCCC" scope="col">姓名</th>
                <th bgcolor="#CCCCC" scope="col">性别</th>
                <th bgcolor="#CCCCC" scope="col">年龄</th>
                <th bgcolor="#CCCCC" scope="col">电话</th>
                <th bgcolor="#CCCCC" scope="col">邮箱</th>
            </tr>

        <?php
        while($row=mysql_fetch_row($result))
        {

        ?>
            <tr>
                <td><?php echo $row[0];?></td>
                <td><?php echo $row[1];?></td>
                <td><?php echo $row[2];?></td>
                <td><?php echo $row[3];?></td>
                <td><?php echo $row[4];?></td>
                <td><?php echo $row[5];?></td>
            </tr>

        <?php
        }
        ?>

        </table>

    </div>
</body>
</html>
