<!DOCTYPE html>
<html>
    <head>
    </head>
    <body>
        <?php 
        $value =$_POST['value'];
        if($value <= 2000){
            $rate =0.03;
        }else if($value > 2000 && $value < 5000){
            $rate =0.05;
        }else{
            $rate =0.07;
        }
        $price ='1250';
        $result =$price + ($price * $rate);
        echo 'Your salary is $'.$result;
        ?>
    </body>
</html>