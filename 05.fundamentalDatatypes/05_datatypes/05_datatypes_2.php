<!DOCTYPE HTML>
	<html>
		<head>
			<title>05_datatypes_2.html</title>
		</head>
		<body>
			<?php
				$quality_points = $_POST['qualitypoints'];
				$credit_hours = $_POST['credithours'];
				$gpa = $quality_points / $credit_hours;
				
				if ($credit_hours <= "0"){
					echo "<p>Please make the amount of credit-hours a non-zero, positive number.</p>";
				} else {
					echo "<p>The grade point average is $gpa</p>";
				}
			?>
		</body>
	</html>