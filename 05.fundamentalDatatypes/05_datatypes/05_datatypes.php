<!DOCTYPE HTML>
<html>
	<head>
		<title>05_datatypes</title>
	</head>
	<body>
		<?php 
			$AGE = $_POST['age'];
			$DAYS = 365;
			$HOURS = 24;
			$MINUTES = 60;
			$SECONDS = 60;

			echo "<p>You are...</p>";
			echo $AGE * $DAYS;
			echo " days old, or </p>";
			echo $AGE * $DAYS * $HOURS;
			echo " hours old, or </p>";
			echo $AGE * $DAYS * $HOURS * $MINUTES;
			echo " minutes old, or </p>";
			echo $AGE * $DAYS * $HOURS * $MINUTES * $SECONDS;
			echo " seconds old.</p>";
		?>
	</body>
</html>