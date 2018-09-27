score = input("ENTER GRADE (0-100):")

if int(score) < 0:
    print("INVALID VALUE")
    exit()
elif int(score) > 100:
    print("INVALID VALUE")
    exit()
elif int(score) >= 90:
    print("GRADE IS A")
    exit()
elif int(score) < 90 and int(score) >= 80:
    print("GRADE IS B")
    exit()
elif int(score) < 80 and int(score) >= 70:
    print("GRADE IS C")
    exit()
elif int(score) < 70 and int(score) >= 60:
    print("GRADE IS D")
    exit()
else:
    print("GRADE IS F")
    exit()