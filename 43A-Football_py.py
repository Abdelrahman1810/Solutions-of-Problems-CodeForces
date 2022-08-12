# https://codeforces.com/contest/43/problem/A

n = int(input())

t1 = "team1"
t2 = "team2"

team1 = 0
team2 = 0

if n != 1 :

    for i in range(0,n):

        z = input()

        if z == t1 or i == 0 :

            t1 = z
            team1 += 1

        else:

            t2 = z
            team2 += 1

    if team1 > team2:
        print(t1)

    else:
        print(t2)

else:
    t1 = input()
    print(t1)