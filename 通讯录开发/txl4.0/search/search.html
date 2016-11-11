<!DOCTYPE HTML>
<html>
<head>
<link type="text/css" rel="stylesheet" href="searchstyle.css"/>
<meta http-equiv="Content-Type" content="text/html; charset=utf-8">
<title>搜索</title>
</head>

<body>
	<div id="searchMode">
    	<div id="search">
                <form name="search" action="search.php" method="post">
                  <fieldset>
                    <legend>搜索用户信息</legend>
                    <br>
                    性别：
                    <input type="radio" name="gender" value="male" checked/>男 
                    <input type="radio" name="gender" value="female"/>女 
                    <br>	
                    姓名：
                    <input type="text" name="name" />
                    <br><br>
                    <input type="submit" value="搜索" />
                  </fieldset>
                </form>
                <br><br><br><hr>
                <div id="search_result">
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


                </div>
            </div>
    </div>
</body>
</html>
