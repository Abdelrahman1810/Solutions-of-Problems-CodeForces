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
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll sum = 0;
        ll b = n/2;
        while (n>0)
        {
            sum += ((n*4)-4)*(n/2);
            n-=2;
        }
        cout << sum nn;
    }
	return 0;
}