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
#define ee <<" "
#define ll long long int
#define flo for(auto i:

int shovel (ll n, ll k)
{
    if (k>=n) return 1;
    ll a = n;
    for (ll i = 1; i*i<=n; i++)
        if (n%i==0)
        {
            if (i<=k) a=min(a, n/i);  
            if (n/i<=k) a=min(a, i);
        }
    return a;
}

int main()
{
    ll t, n, k; cin >> t;
    while (t--)
        cin>> n>> k, cout<< shovel(n, k) nn;
	return 0;
}