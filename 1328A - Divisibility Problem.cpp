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


int main()
{
    ll n;
    cin >> n;
    ll x[n];
    for (int i =0; i < n; i++)
    {
        ll a, b;
        cin >> a>> b;
        if (a % b) x[i] = b - (a % b);
        else x[i] = 0;
    }
    for (int i =0; i < n; i++)
        cout << x[i] nn;
    return 0;
}