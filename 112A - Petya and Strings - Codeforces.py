alpha = input()
alpha2 = input()

x = ''
y = ''

for i in range(len(alpha)):
    if ord(alpha[i]) > 64 and ord(alpha[i]) < 91:
        x += chr(ord(alpha[i]) + 32)
    else:
        x += alpha[i]

    if ord(alpha2[i]) > 64 and ord(alpha2[i]) < 91:
        y += chr(ord(alpha2[i]) + 32)
    else:
        y += alpha2[i]

if x < y:
    print(-1)
elif x == y:
    print(0)
else:
    print(1)
