# https://codeforces.com/contest/270/problem/A

n = int(input())
x = 0
y = 0
z = []

for i in range(0, n):

    r = float(input())
    x = 360.00 / (180.00 - r)
    y = int(360 / (180 - r))

    if x == y:
        z.append("YES")

    else:
        z.append("NO")

for i in range(0, n):
    print(z[i])
