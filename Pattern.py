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

5)

*****
****
***
**
*

Code:

x = 5;

for i in range(0,x):

    for j in range(i,x):
        print("*",end='')
    print()

6)

12345
2345
345
45
5

Code:

x = 5;

for i in range(0,x):

    for j in range(i,x):
        print(j+1,end='')
    print()

7)      *         
      * * *       
    * * * * *     
  * * * * * * *   
* * * * * * * * *

Code:

x = 5;

for i in range(0,x):
    
    #space
    for space in range(0,x-i-1):
        print(" ",end=" ")
    

    #star
    for star in range(0,2*i+1):
        print("*",end=" ")
  

    #space
    for space in range(0,x-i-1):
        print(" ",end=" ")

    print()
