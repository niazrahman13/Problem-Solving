x,y = input().split();

X = int(x);
Y = int(y);

temp = input().split()

lst = list(map(int, temp));

count = 0

temp2 = 0

for i in range(Y):
    temp2 = lst[i]

for i in range(len(lst)):
    if(lst[i] >= temp2 and lst[i] != 0):
        count += 1

print(count)
