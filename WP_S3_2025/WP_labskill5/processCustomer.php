<?php
include "customer.php";
if(isset($_POST['submit'])){
    addNewCustomer();
    header('location:customerList.php');
    exit;
}else{
    echo "error";
}
?>