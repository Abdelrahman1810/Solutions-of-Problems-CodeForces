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

int t;

int main()
{
    cin >> t;
    while (t--)
    {
        int n;
        cin>> n;
        ll a[n];
		vector<ll> b;
        for (int i=0; i<n; i++) cin>> a[i];
        sort(a, a+n);
        for (int i=n-1; i>0; i--)  b.push_back(a[i]-a[i-1]);
        sort(b.begin(), b.end());
		cout<< b[0] nn;  
    }
	return 0;
}