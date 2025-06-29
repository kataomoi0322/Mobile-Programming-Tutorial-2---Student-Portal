<!DOCTYPE html>
<html>
    <head>
        <title>Register Form</title>

        <style>
            h5{
                font-size: 20px;
            }

            form{
                padding: 20px;
                line-height: 15px;
            }

            .greenSubmitButton{
                background-color: green;
                width: 100px;
                height: 50px;
                font-size: 15px;
                color: white;
            }

        </style>

    </head>
    <form class="w3-container" name="registerFrom" action="processCustomer.php" onsubmit="return ValidationForm()" method="post" class="w3docs">
    <body>
        <p style="background-color: gray;font-size: larger;">Customer Register</p>
        <label for="name"><h5>Name: </h5></label>
        <input type="text" name="name" size="100" style="font-size: 20px;">
        <label for="email"><h5>email: </h5></label>
        <input type="text" name="email" size="100" style="font-size: 20px;">
        <label for="tel"><h5>contact number</h5></label>
        <input type="text" name="number" size="100" style="font-size: 20px;">
        <label for="Username"><h5>Username</h5></label>
        <input type="text" name="Username" size="100" style="font-size: 20px;">
        <label for="password"><h5>Password</h5></label>
        <input type="text" name="Password" size="100" style="font-size: 20px;">
        <br><br>
        <input type="submit" name="submit" class="greenSubmitButton">
    </form>
        <script>
            function ValidationForm() {
                //js example if regNumber and brand are compulsory input
                var name = document.forms["registerFrom"]["name"];
                var email = document.forms["registerFrom"]["email"];
            
                if(name.value == "") {
                alert("Please enter name.");
                name.focus();
                return false;
                }
                if(email.value == "") {
                alert("Please enter a valid email.");
                email.focus();
                return false;
                }
                return true;
            }
        </script>
    </body>
</html>