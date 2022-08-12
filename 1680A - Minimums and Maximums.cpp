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
    ll t; cin>>t;
    while (t--)
    {
        ll l1, r1, l2, r2; cin>>l1>> r1>> l2>> r2;
        if (l1<=l2)
            (l2<=r1)? cout<< l2 nn : cout<< l1+l2 nn;
        else
            (l1<=r2)? cout<< l1 nn:cout<< l1+l2 nn;
    }
	return 0;
}