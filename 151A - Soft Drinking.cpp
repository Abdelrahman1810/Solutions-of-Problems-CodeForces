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

#define i0 for(int i=0; i<
#define i1 for(int i=1; i<
#define oi ;i++)

#define j0 for(int j=0; j<
#define j1 for(int j=1; j<
#define oj ;i++)

int t;

int main()
{
    int n, k, l, c, d, p, nl, np;
    cin >> n>> k>> l>> c>> d>> p>> nl>> np;
    ll toast1 =(k*l)/nl;
    ll toast2 =(d*c);
    ll toast3 =(p/np);
    ll m = min(toast1, toast2);
    m = min(m, toast3);
    cout << m/n;
	return 0;
}