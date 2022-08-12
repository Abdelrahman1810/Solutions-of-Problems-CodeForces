# https://codeforces.com/contest/486/problem/A

n = int(input())

x = n%2

if x :    
    print(-int((n/2)+1))

else:
    print(int(n/2))