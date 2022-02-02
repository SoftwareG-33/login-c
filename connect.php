<?php      
    $host = "localhost";  
    $user = "root";  
    $password = '';  
    $db_name = "registration";  
      
    $serv = mysqli_connect($host, $user, $password, $db_name);  
    if($serv === false) {  
        die("Failed to connect with MySQL: ". mysqli_connect_error());  
    }
    //if(isset($_POST['register'])){
        $code = $_REQUEST['UserCode']; 
        $fname = $_REQUEST['FirstName']; 
        $lname = $_REQUEST['LastName'];  
        $phone = $_REQUEST['PhoneNumber'];  

     //   $tbl = "INSERT INTO  register1 VALUES ('$code','$fname','$lname','$phone')";
    
    $tbl="INSERT INTO `register1` (`User Code`, `First Name`, `Last Name`, `Phone Number`) VALUES ('$code', '$fname', '$lname', '$phone');";

    mysqli_query($serv, $tbl);
     
   //}
  $coll = "SELECT * FROM register1";
       $info = $serv->query($coll);
    
   // if(mysqli_query($serv, $tbl)){
       // echo "<h3>The Student has been Registered succesfully<h3>";
       // echo nl2br ("\n$fname $lname $phone $code");
  //  }
    mysqli_close($serv);
?>  
<!DOCTYPE html>
<html lang="en">
  
<head>
    <meta charset="UTF-8">
    <title>Students table</title>
    <link rel="stylesheet" href="table.css"/>
       
</head>
  
<body>
    <div>
    <h1>Kinder Care</h1>
    <h4>Registered Students</h4>
    </div>
    <table>
        <tr>
            <th>User Code</th>
            <th>First Name</th>
            <th>Last Name</th>
            <th>Phone Number </th>
            </tr>
            
        <?php
         while($rows=$info->fetch_assoc())
        {
         ?>
         <tr>
             <td><?php echo $rows['User Code'];?></td>
             <td><?php echo $rows['First Name'];?></td>
             <td><?php echo $rows['Last Name'];?></td>
            <td><?php echo $rows['Phone Number'];?></td>
            </tr>
        <?php
                }
        ?>
    </table>
</body>
  
</html>
