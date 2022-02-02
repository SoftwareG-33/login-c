
<!DOCTYPE html> 
 <html lang="en" >
      <head>
     <meta charset="UTF-8"> 
     <title>message</title>
     <link rel="stylesheet" type="text/css" href="me.css"/>
</head> 
<body>
    <div class="form-style-5">
        <form action="connect.php" method="GET">
        <legend class="reg"> <h2>Registration Form</h2></legend>
        <label for="code">User Code</label>
        <input type="text" name="UserCode" required>
        <label for="fname">First Name</label>
        <input type="text" name="FirstName" required>
        <label for="lname">Last Name</label>
        <input type="text" name="LastName" required>
        <label for="phone">Phone Number</label>
        <input type="text" name="PhoneNumber" required>
       
        <input type="submit" value="REGISTER" name = "register"/>
        </form>
        </div>
</body>
</html>