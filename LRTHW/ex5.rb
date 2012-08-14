name  = "Joe Dallago"
height = 60
weight = 175
age = 20
eyes = "Brown"
teeth = "White"
hair = "Brown"

puts "Let's talk about %s" % name
puts "He's %d inches tall." % height
puts "He's %d pounds too heavy." % weight
puts "Actually that's not too heavy."
puts "He's got %s eyes and %s hair." % [eyes, hair]
puts "His teet are usually %s, depending on the coffee." % teeth

puts "If I add %d, %d, and %d, I get %d." % [height, weight, age, height + weight + age]