THings to learn:

# Removing duplicate without using any function

x = input() // string
empty = []
for i in x: // takes every single character
  if not in empty:
    empty.append(i)

# Concatinate while converting any character into upper/lower
x = input()
converted = x[0].upper() + x[1:0]

here x[0] takes first character..than convert into upper case
than we add this with other character..here x[1:]..
start from index 1 position...because we use 0 index at first..
