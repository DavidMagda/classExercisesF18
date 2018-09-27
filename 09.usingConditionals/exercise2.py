pointsPossible = input("ENTER POSSIBLE POINTS: ")
pointsEarned = input("ENTER EARNED POINTS: ")

if int(pointsPossible) > 0 and int(pointsEarned) / int(pointsPossible) >= 0.60:
    print("YOU PASS!")
else:
    print("YOU FAIL.")