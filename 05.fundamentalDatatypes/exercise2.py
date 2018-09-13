points = input('Enter the number of quality points earned:')
hours = input('Enter the number of credit hours earned:')
if int(hours) < 1:
    print('INVALID HOURS AMOUNT')
    exit()
print('The grade point average is', int(points) / int(hours))

    