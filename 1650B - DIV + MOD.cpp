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
#define floi for(int i=0;i<n;i++)
#define floj for(int j=0;j<n;j++)

int main()
{
    ll t; cin >> t;
    while (t--)
    {
        ll l, r, a; cin>> l>> r>> a;
        ll m, x, M;
		m= r/a + r%a;
		x=(r/a)*a - 1;  
        M = x/a + x%a;
		if(x>=l) m=max(m,M);
		cout<< m nn;
    }
	return 0;
}