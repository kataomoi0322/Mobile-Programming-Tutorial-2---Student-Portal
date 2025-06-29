<!DOCTYPE html>
<html>
    <head>
    </head>
    <body>
        <form action ="" method = "GET">
            <fieldset>
                <label for="no1">Width:</label>
                <br><input type="number" name="no1" >
                <label for="no1">length:</label>
                <br><input type="number" name="no2" >
                <br><input type="submit" name="addButton" value="result">

            </fieldset>
        </form>
        <?php 
        $no1 =$_GET['no1'];
        $no2 =$_GET['no2'];
        $result =$no1 * $no2;
        echo 'Total is'.$result;
        ?>
    </body>
</html>