# https://codeforces.com/contest/742/problem/A 

n = int(input())
 
if n != 0 :
    x = n%4
 
    if x == 0 :
        print(6)
 
    elif x == 1 :
        print(8)
 
    elif x == 2 :
        print(4)
 
    else:
        print(2)
 
else:
    print(1)