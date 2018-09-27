<!DOCTYPE HTML>
<html>
        <body>
            <?php 
                $number = $_POST['number'];
                if ($number < 0){
                    echo "Try entering a non-negative number (including 0)";
                    exit;
                }
                if ($number > 0 && 1/$number>= 0){
                    echo "sure.";
                } else {
                    echo "PHP generally gives a warning if there is a division by zero, however since there is no warning here, we can see that PHP has not done the test because the variable isn't greater than 0";
                }
            ?>
        </body>
</html>