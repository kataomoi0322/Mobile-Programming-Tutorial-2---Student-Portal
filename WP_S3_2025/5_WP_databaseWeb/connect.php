<?php
$servername = "localhost";
$username = "";
$password = "";

$database = "databasename";

// Create connection
$conn = mysqli_connect($servername, $username, $password,
$database );
// Check connection
if (!$conn) {
die("Connection failed: " . mysqli_connect_error());
}
echo "Connected successfully";

// do the processing need (related CRUD operation)
?>