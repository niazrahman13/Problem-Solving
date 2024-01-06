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

# Alphabet to ASCII Code

A starts from 65
B = 66
C = 67
...
Z = 90

a starts from 97
b  = 98
c = 99

If we know the value of A,
we just need to add 32 with the ascii of A for finding the small version of that alphabet

in coding

x = "A";

store = ord(x)
print(store)

*ord() function takes character and convert into ascii

x = "A"
store = chr(ord(x)+32)

here ord(x) receive A and convert 65, then we ad 32, 65+32 = 97,
then we use chr()function to convert 97 into character, which is small a, "a"
