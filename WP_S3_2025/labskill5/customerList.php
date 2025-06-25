<!DOCTYPE html>
<html>
    <head>
            <title>Car list</title>
            <style>
                table {
                    width: 100%;
                    border-collapse: collapse;
                }

                th, td {
                    border: 1px solid black;
                    padding: 18px;
                    text-align: left;
                }
            </style>
    </head>
    <body>
        <h2>Customer list</h2>
        <table>
            <thead>
            <tr>
                <th>Customer</th>
                <th>Email</th>
                <th>Contact Number</th>
                <th>Username</th>
                <th>Password</th>
            </tr>
        </thead>
            <?php
                include 'customer.php';
                if(isset($_POST['delete'])){
                    $toDelete = $_POST['delete_username'];
                    if(deleteCustomer($toDelete)){
                        echo "<p style='color:green;'>Customer deleted successfully.</p>";
                    }else{
                        echo "<p style='color:red;'>Failed to delete customer.</p>";
                    }
                }
                getListOfCustomer();
            ?>
        </table>
    </body>
</html>