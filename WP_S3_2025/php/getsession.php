<?php
session_start();
if(isset($_SESSION['username'])){
    echo 'Welcome,' .htmlspecialchars($_SESSION['username']);
}else{
    echo "No session found";
}
?>