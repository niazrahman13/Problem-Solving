1)

*****
*****
*****
*****
*****

Code:

x = 5;

for i in range(0,x):

    for j in range(0,x):
        print('*',end='')
    print()
  

2)

*
**
***
****
*****

Code:

x = 5;

for i in range(0,x):

    for j in range(0,i+1):
        print('*',end='')
    print()

3)

1
12
123
1234
12345

Code:

x = 5;

for i in range(0,x):

    for j in range(0,i+1):
        print(j+1,end='')
    print()

4)

1
22
333
4444
55555

Code:

x = 5;

for i in range(0,x):

    for j in range(0,i+1):
        print(i+1,end='')
    print()
