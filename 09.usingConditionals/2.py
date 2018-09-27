pointspossible= input ('What is the pointspossible?')
pointsearned = input ('Enter Your points:')
if pointspossible > 0 and int(pointsearned) / int(pointspossible) >= 0.60 :
    print ('You Pass')
else:
    print('You fail')
    