<!DOCTYPE html>
<html>
    <body>
        <form action="" method="POST">
        <h1>Room Rental</h1>
        <label id="Price">Price:</label><br>
        <input type="number" id="price" name="price"><br>
        <label id="Rooms">No of Rooms:</label><br>
        <input type="number" id="rooms" name="rooms"><br>
        <button type="submit">Check</button><br>
        </form>
        <?php
        if($_SERVER["REQUEST_METHOD"]=="POST"){
        $Price = $_POST['price'];
        $Rooms = $_POST['rooms'];

        $totalPrice = $Price * $Rooms;
        $Tax = $totalPrice * 0.06;
        $Amount = $totalPrice + $Tax;

        echo "payment: <br>".$totalPrice;
        echo "<br> Tax: <br>".$Tax;
        echo "<br> Amount due: <br>".$Amount;
    }
    

?>

    </body>
</html>