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
    <h2>Car list</h2>
    <table>
        <thead>
            <tr>
                <th>Reg Number</th>
                <th>Brand</th>
                <th>Model</th>
                <th>Reg Date</th>
                <th>Price</th>
                <th>Engine Type</th>
            </tr>
        </thead>
        <tbody>
            <?php
            $con = mysqli_connect('localhost', 'root', '', 'cardb2025');
            if (mysqli_connect_error()) {
                echo "<tr><td colspan='6'>Failed to connect to MySQL: " . mysqli_connect_error() . "</td></tr>";
            } else {
                $sql = "SELECT regNumber, brand, model, regDate, price, engineType FROM car";
                $result = mysqli_query($con, $sql);

                if (mysqli_num_rows($result) > 0) {
                    while ($row = mysqli_fetch_assoc($result)) {
                        echo "<tr>";
                        echo "<td>" . htmlspecialchars($row['regNumber']) . "</td>";
                        echo "<td>" . htmlspecialchars($row['brand']) . "</td>";
                        echo "<td>" . htmlspecialchars($row['model']) . "</td>";
                        echo "<td>" . htmlspecialchars($row['regDate']) . "</td>";
                        echo "<td>" . htmlspecialchars($row['price']) . "</td>";
                        echo "<td>" . htmlspecialchars($row['engineType']) . "</td>";
                        echo "</tr>";
                    }
                } else {
                    echo "<tr><td colspan='6'>No cars found</td></tr>";
                }

                mysqli_close($con);
            }
            ?>
        </tbody>
    </table>
</body>
</html>
