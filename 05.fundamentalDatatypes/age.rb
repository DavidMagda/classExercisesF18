#AGE CALCULATOR

#Time Measurements
SECONDS_IN_MINUTE = 60
MINUTES_IN_HOUR = 60
HOURS_IN_DAY = 24
DAYS_IN_YEAR = 365

#Calculate
answer = 0
print "Enter your age in years: "
age = gets.to_i
puts "You are ..."
answer = age * DAYS_IN_YEAR
print answer
puts " days old, or"
answer = answer * HOURS_IN_DAY
print answer
puts " hours old, or"
answer = answer * MINUTES_IN_HOUR
print answer
puts " minutes old, or"
answer = answer * SECONDS_IN_MINUTE
print answer
puts " seconds old."