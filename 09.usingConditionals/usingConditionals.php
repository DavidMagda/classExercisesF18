<!DOCTYPE HTML>
<html>
	<head>
		<title>09. usingConditionals</title>
	</head>
	
	<body>
		<?php
		    $score = $_POST['score'];
		    $STRING = "The grade is a(n)";
		    if ($score >= 90 && $score <= 100) {
		        echo $STRING . " A";
		    } else if ($score >= 80 && $score <= 89) {
		        echo $STRING . " B"; 
		    } else if ($score >= 70 && $score <= 79) {
		        echo $STRING . " C";
		    } else if ($score >= 60 && score <= 69) {
		        echo $STRING . " D";
		    } else if ($score >= 0 && score <= 59) {
		        echo $STRING . " F";
		    } else {
		        echo "Please enter a valid, whole number grade between 0 and 100.";
		    }
	    ?>
	</body>
</html>