<!DOCTYPE html>
<html>
    <head>
    </head>
    <body>
        <form action ="" method = "GET">
            <fieldset>
                <label for="price">Price:</label>
                <br><input type="number" name="price" ><br>
                <label for="tax">Tax Percent:</label>
                <br><input type="tax" name="tax" >
                <br><input type="submit" name="addButton" value="result">

            </fieldset>
        </form>
        <?php 
        $price =$_GET['price'];
        $tax =$_GET['tax'];
        $result =$price + ($price * $tax /100);
        echo 'Total is'.$result;
        ?>
    </body>
</html>