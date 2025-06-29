<!DOCTYPE html>
<html>
    <?php
        function addNewCustomer(){
            $name = $_POST['name'];
            $email = $_POST['email'];
            $number = $_POST['number'];
            $Username = $_POST['Username'];
            $Password = $_POST['Password'];
            $con = mysqli_connect('localhost','root','','cardb');
            //register form
            if(mysqli_connect_errno()){
            echo "Failed to connect to MySQL:".mysqli_connect_error();
            }
            //database
            //$sql="INSERT INTO customer(`customer`, `email`, `number`, `Username`, `Password`) 
            $sql="INSERT INTO customer(customer, email, number, Username, Password) 
            VALUES ('$name','$email','$number','$Username','$Password')";

            $qry = mysqli_query($con,$sql);
            mysqli_close($con);

            if(!$qry){
                return false;
            }else{
                return true;
            }
        }

        

        function getListOfCustomer(){
            $con = mysqli_connect('localhost', 'root', '', 'cardb');
            if (mysqli_connect_error()) {
                echo "<tr><td colspan='6'>Failed to connect to MySQL: " . mysqli_connect_error() . "</td></tr>";
            } else {
                $sql = "SELECT `customer`, `email`, `number`, `Username`, `Password` FROM customer";
                $result = mysqli_query($con, $sql);

                if (mysqli_num_rows($result) > 0) {
                    while ($row = mysqli_fetch_assoc($result)) {
                        echo "<tr>";
                        echo "<td>" . htmlspecialchars($row['customer']) . "</td>";
                        echo "<td>" . htmlspecialchars($row['email']) . "</td>";
                        echo "<td>" . htmlspecialchars($row['number']) . "</td>";
                        echo "<td>" . htmlspecialchars($row['Username']) . "</td>";
                        echo "<td>" . htmlspecialchars($row['Password']) . "</td>";
                        echo "<td>
                            <form method='post' style='display:inline'>
                                <input type='hidden' name='delete_username' value='" . $row['Username'] . "'>
                                <input type='submit' name='delete' value='Delete' onclick=\"return confirm('Are you sure you want to delete this record?');\">
                            </form>
                        </td>";
                        echo "</tr>";
                    }
                } else {
                    echo "<tr><td colspan='6'>No customer found</td></tr>";
                }

                mysqli_close($con);
            }
        }

        function deleteCustomer($Username) {
            $con = mysqli_connect('localhost','root','','cardb');
            if(mysqli_connect_errno()){
                echo "Failed to connect to MySQL:".mysqli_connect_error();
                return false;
            }

            $stmt = $con->prepare("DELETE FROM customer WHERE Username = ?");
            if (!$stmt) {
                echo "Prepare failed: " . $con->error;
                return false;
            }

            $stmt->bind_param("s", $Username);
            $result = $stmt->execute();

            $stmt->close();
            $con->close();

            return $result;
        }
    ?>
</html>