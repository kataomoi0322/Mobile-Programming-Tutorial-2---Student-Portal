<?php
error_reporting(E_ALL);
ini_set('display_errors', 1);

if ($_SERVER["REQUEST_METHOD"] == "POST") {
    if (isset($_FILES['myfile']) && $_FILES['myfile']['error'] == 0) {
        $filename = basename($_FILES['myfile']['name']);
        $tempname = $_FILES['myfile']['tmp_name'];
        $destinationFolder = "uploads";

        if (!is_dir($destinationFolder)) {
            mkdir($destinationFolder, 0755, true);
        }

        $destination = $destinationFolder . "/" . $filename;
        if (move_uploaded_file($tempname, $destination)) {
            echo "File uploaded successfully: " . htmlspecialchars($filename);
        } else {
            echo "Failed to move the uploaded file.";
        }
    } else {
        echo "No file uploaded or an error occurred.";
    }
}
?>
}
?>