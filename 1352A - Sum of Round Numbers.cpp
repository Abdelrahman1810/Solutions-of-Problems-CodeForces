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

int dig (int x)
{
    int a = x;
    int b = 0;
    while (a) { b++; a/=10; }
    return b;
}

bool Isround (int x)
{
    int a = x;
    int b = 0;
    while (a) { b++; a/=10; }
    int t = pow(10, --b);
    if (x%t == 0) return 1;
    else return 0;
}

int main()
{
    ll n;
    cin >> n;
    ll x[n];
    vector<ll> y[n];
    i0 n oi
        cin >> x[i];

    for (int i = 0; i < n; i++)
    {
        ll d = dig(x[i]);

        if (d == 1) y[i].push_back(x[i]);

        else if (Isround(x[i])) y[i].push_back(x[i]);
        
        else
        {
            for (int j = 1; j <= d; j++)
            {
                ll a = pow(10, j);
                ll b = pow(10, (j-1));
                ll k = ( ( x[i] % a ) / b )* b;
                if (k) y[i].push_back(k);
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << y[i].size() nn;
        for (int j = 0; j < y[i].size(); j++)
            cout << y[i][j] << " ";
        cout nn;
    }
    return 0;
}