test = int(input());

count = 0

for i in range(test):
    temp = input()
    if(temp == "++X" or temp == "X++"):
        count = count + 1
    elif(temp == "--X" or temp == "X--"):
        count = count - 1
print(count)
