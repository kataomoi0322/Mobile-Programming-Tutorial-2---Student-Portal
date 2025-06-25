<?php
session_start();
$_SESSION['username'] ="Alish";
echo "Session is set.<a href = 'getsession.php'>Go to next page</a>";
?>