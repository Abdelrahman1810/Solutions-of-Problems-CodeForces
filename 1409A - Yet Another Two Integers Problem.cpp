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


int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll a, b;
        cin >> a>> b;
        ll c = abs(b-a);
        ll ans = c/10;
        ans += (c%10)? 1:0;
        cout << ans nn;
    }
	return 0;
}
