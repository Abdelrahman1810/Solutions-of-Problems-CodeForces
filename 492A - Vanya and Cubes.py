n,sum=int(input()),0
for i in range(1,n+2):
    sum+=i
    if n>=sum:
        n-=sum
    else:
        print(i-1)
        exit()