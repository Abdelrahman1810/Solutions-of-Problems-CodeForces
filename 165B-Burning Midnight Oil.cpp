// https://codeforces.com/contest/165/problem/B

#include <iostream>
#include <stdio.h>
#include <vector>
#include <cmath>
#include <math.h>
#include <set>
#include <algorithm>
#include <utility>
 
using namespace std;
#define nn <<endl
#define ll long long int
#define flo for(auto i:
#define li for(int i=0; i< 
#define li1 for(int i=1; i<
#define oi ;i++)
#define lj for(int j=0; j<
#define lj1 for(int j=1; j<
#define oj ;i++)


int main()
{
    ll n, k;
    cin>>n >>k;
 
    if (n == 1)
    {
        cout << 1;
        exit(0);
    }
    
    for (int i = (n/2); i < n+1; i++)
    {
        int a;
        int b = 0;
        for (int j = 0; j < n; j++)
        {
            a = i / (pow(k, j));
            if (a == 0)
            {
                if (b >= n)
                {
                    cout << i;
                    exit(0);
                }
                break;
            }
 
            b += a;
        }
        
    }
 
    return 0;
}