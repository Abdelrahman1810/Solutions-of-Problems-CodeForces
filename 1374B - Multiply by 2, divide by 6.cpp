#include <iostream>
#include <stdio.h>
#include <vector>
#include <cmath>
#include <iomanip>
#include <math.h>
#include <set>
#include <algorithm>
#include <utility>
 
using namespace std;
#define nn <<endl
#define ll long long int
#define flo for(auto i:
 
#define i0 for(int i=0; i< 
#define i1 for(int i=1; i<
#define oi ;i++)
 
#define j0 for(int j=0; j<
#define j1 for(int j=1; j<
#define oj ;i++)
 
int x, y, n;
 
int dig (int b)
{
    int z=0;
    while (b)
        {b/=10; z++;}
    return z;
}
int sum (int b)
{
    int sum = 0;
    while (b)
        {sum+=b%10; b/=10;}
    return sum;
}
 
int main()
{
    int t;
    cin >> t;
 
    while (t--)
    {
        int a = 0, b=0;
        cin >> n;
        if (n == 1) {cout << 0 nn; continue;}
        b=sum(n);
        if (n%3 != 0) {cout << (-1) nn; continue;}
        
        while (n!=1)
        {
            if (n%3 != 0) {cout << (-1) nn; break;}
            if (n%6 == 0) {n=n/6;}
            else {n=n*2;}
            a++;
        }
 
        if(n==1) cout << a nn;
    }
	return 0;
}