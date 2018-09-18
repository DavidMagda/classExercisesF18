points= input("Enter the number of quality points earned:")
credits= input('Enter the number of credit hours earned:')
if(credits=='0'):
    print('0') 
print('GPA:', int(points)/int(credits))