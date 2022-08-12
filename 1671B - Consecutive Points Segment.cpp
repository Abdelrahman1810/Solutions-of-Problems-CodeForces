#include <iostream>
#include <stdio.h>
#include <vector>
#include <cmath>
#include <iomanip>
#include <math.h>
#include <set>
#include <algorithm>
#include <utility>
#include <cstring>
 
using namespace std;
#define nn <<endl
#define ee <<"  "
#define ll long long int
#define flo for(auto i:
 
#define i0 for(int i=0; i< 
#define i1 for(int i=1; i<
#define oi ;i++)
 
#define j0 for(int j=0; j<
#define j1 for(int j=1; j<
#define oj ;i++)
 
bool maybe (int n)
{
    ll x[n+2];
    ll a=0;
    
    if (n==1)
    {
        cin >> x[0];
        return 1;
    }
 
    for (ll i = 0; i < n; i++) cin >> x[i];
 
    ll A[4];
    A[1] = 0;
    A[2] = 0;
    A[3] = 0;
 
    for (ll i = 1; i < n; i++)
    {
        a = x[i]-x[i-1];
        if (a > 3)
        {
            return 0;
        }
        A[a]++;
    }
    if (A[2]>=3 || A[3]>=2)
    {
        return 0;
    }
    if (A[3]!=0 && A[2]!=0)
    {
        return 0;
    }
    return 1;
}
 
int main()
{
    ll t ;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        if (maybe(n)) cout << "YES" nn;
        else cout << "NO" nn;
    }
	return 0;
}