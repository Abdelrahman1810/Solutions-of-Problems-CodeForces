# https://codeforces.com/contest/1204/problem/A

from math import log2

def binaryToDecimal(B):
     
    De, i, n = 0, 0, 0
    while(B != 0):
        dec = B % 10
        De = De + dec * pow(2, i)
        B = B//10
        i += 1
    return De;   

n = int(input())
if n == 0 :
    print(0), exit(0)
x = binaryToDecimal(n)
A = .5 * log2(x)

for i in range(0, 101) :
    if x == pow(4, i) :
        print((i)), exit(0)
    elif x < pow(4, i) :
        print(i), exit(0)