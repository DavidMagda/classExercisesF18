amtD = 365
amtH = 24
amtM = 60
amtS = 60
print "Enter your age in years: "
age = gets.to_i
print "You are...\n"
days = age * amtD
print "#{days} days old or,\n"
hours = days * amtH
print "#{hours} hours old or,\n"
minutes = hours * amtM
print "#{minutes} minutes old or,\n"
seconds = minutes * amtS
print "#{seconds} seconds old!\n"
