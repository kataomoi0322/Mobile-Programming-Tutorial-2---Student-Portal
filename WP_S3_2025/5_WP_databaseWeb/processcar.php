<!DOCTYPE html>
<html>ipt>
        <?php
        include "addcar.php";
        if(isSet($_POST['addCarButton'])) // add new car
        {
            addNewCar();//call function in car.php
            header('Location: carList.php');//redirect to car list
            exit;
        }
        ?> 
</html>

