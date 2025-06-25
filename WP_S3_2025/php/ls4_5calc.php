<!DOCTYPE html>
<html>
    <head>
    </head>
    <body>
        <?php 
        $no1 =$_POST['no1'];
        $no2 =$_POST['no2'];
        if(isset($_POST['addbutton'])){
            $result =$no1 + $no2;
            echo 'result: '.$result;
        }

        if(isset($_POST['subbutton'])){
            $result =$no1 - $no2;
            echo 'result: '.$result;
        }

        if(isset($_POST['mulbutton'])){
            $result =$no1 * $no2;
            echo 'result: '.$result;
        }

        if(isset($_POST['divbutton'])){
            $result =$no1 / $no2;
            echo 'result: '.$result;
        }
        
        ?>
    </body>
</html>