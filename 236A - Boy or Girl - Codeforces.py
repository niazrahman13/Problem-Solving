x = input()

empty = []

for i in x:
    if i not in empty:
        empty.append(i)

if(len(empty) %2 == 0):
    print("CHAT WITH HER!")
else:
    print("IGNORE HIM!")
