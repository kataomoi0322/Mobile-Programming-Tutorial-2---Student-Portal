<!DOCTYPE html>
<html>
<?php
    include "car2.php";
    echo '<h1>List of Car</h1>';
    $carList = getListOfCar(); //call function in car.php
    echo "No of cars: " . mysqli_num_rows($carList);
    echo '<table border="1">';
    echo '<tr><td>No</td><td>Reg Number</td><td>Brand</td><td>Reg. Date</td></tr>';
    $count=1;
    //display data
    //repeat for each row
    while($row=mysqli_fetch_assoc($carList)){
        echo "<tr>";
        echo "<td>".$count."</td>";
        echo "<td>" . $row['regNumber'] . "</td>"; //display regNumber
        echo "<td>" . $row['brand']. "</td>";
        $date=date_create($row['regDate']);
        $regDate = date_format($date,"d/m/Y");
        echo "<td>" . $regDate. "</td>";
        $count++;
    }
    echo '</table>';
?>
</html>