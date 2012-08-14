formatter = "%s %s %s %s"

puts formatter % [1, 2, 3, 4]
puts formatter % ["one", "two", "three", "four"]
puts formatter % [true,  false, false, true]
puts formatter % [formatter, formatter, formatter, formatter]
puts formatter % [
    "I had this thing.",
    "That said you could type upright.",
    "But it didn't sing.",
    "So I said goodnight."
]