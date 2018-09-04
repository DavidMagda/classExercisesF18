print "Enter quality points: "
qp = gets.to_f
if qp == 0
  print "Error cannot do math with 0"
end
print "Enter total credit hours: "
ch = gets.to_f
print "the grade point average is #{qp/ch}"