# https://codeforces.com/contest/584/problem/A

n, t = map(int, input().split())

a = t
b = 0

while a:
    a = int(a / 10)
    b = b + 1

if n > b:

    n = n - b

    x = pow(10,n)

    t = t * x

    print(t)

elif n == b:

    print(t)

else:

    print(-1)
