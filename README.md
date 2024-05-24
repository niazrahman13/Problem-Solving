## input()
=> 
This function always takes string as input

## input.split()
=> 
If we use input().split() on a single variable like x = input.split(), it will return a list
It doesn;t count space, in the terminal, if we type a b, it will return ["a", "b"]

## x,y = input.split()
=>
If we give two varialbes like x,y = input.split(), we will give two or three inputs on the terminal side by side,
lik a b c d and split() function actually converts all this intro string and store them separately

Like,
x,y = input.split()

on terminal,
a b

result = a b {both are strings}

by default split function separate by spaces, if we use cmma or other char like split(","),
it will sperate by finding ,

## map()
=>
map function takes two things, first param is function,second is itterating items.

## x,y = (map(int, input().split())
=>
suupose we need to take as input 1 2.
how to do??
using map...
here x, y denotes 2 inputs, if we type x,y,z. it means we need to give three inputs
here input().split() receives all the inputes from terminal and for using map function,
split sperate all the items and one by one it will convert into integar, because map function takes one by one iterable elements and pass on 1st param function.
here input().split() takes all the numbers and by default they are string, int function takes every elements and convert into int.
here we only give two cariables, x and y

so i terminal , if we give 1 2,
input().split() takes 1 2, they are now string, one by one elements convert into integar and puts on their variable.

## x = list(map(int, input().split())
=>
If we use only one variable. we we give 1 2 3 4 on terminal
input().split() will receieve all the elements and converts into string one by one.
we use list, so it will append all the converted elements into a list.
then the listwill return on x variable.
If we use x,y and still use the list on first, it doesn't matter
x will receive the first converted elements and print this

## String Concatinate using []
=>
This is an example where I need to convert the first Char on a string into capital

x = input()

Converted_String = x[0].upper() + x[1:]

explaination:
Here I take the first character of a string, then i use upper() function,which converts the char intu uppercase if it is on Small Character.
then I concate this usin + sign and using []. Here x is the variable where the string store, x[1:] 1 means it will take without First item,
index is 0, then 1, So [1:]

## Removing duplicate without any Built In Func:
=>
Suppose I give on the terminal NNiAAAz,
I need to remove all the duplicate from this string,
How??

firstly I need to take input

x = input()

x will store string.

Than I need to create an empty array or list

empty = []

than I need for loop

for i in x

here every iteration, i will take n,i,a,z separately

than I need to check with empty array

so if i not in empty

it means i receieve at first n, than i, than a..

so if this n i a not in empty

than

empty.append(i)

full code:

x = input()

empty = []

for i in x:
  if i not in empty:
    empty.append(i)
print(x)


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

# C Plus Plus

## Converting char to int value, just use - '0'

string s = "123";

for (auto u : s){
  int x = u - '0'
  cout<<x<<' ';
};

at first u will store 1, then it will convert char 1 into int value;

## TO show the data type, just use typeid(VARIABLE NAME).name()
