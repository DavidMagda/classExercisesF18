<!DOCTYPE HTML>
<html>
    <body>
        <?php 
            $cats = 2;
            $jobs = 3;
            $reservations = 4;
            
            $dollars = $cats * $jobs;
            
            if ($reservations == $dollars) {
                $jobs = $cats / 5;
            }
            
            echo $jobs;
        ?>
    </body>
</html>