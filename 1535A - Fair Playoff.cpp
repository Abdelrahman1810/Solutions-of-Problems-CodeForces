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

int main()
{
    ll t; cin>>t;
    while (t--)
    {
        ll p1, p2, p3, p4; cin>>p1>> p2>> p3>> p4;
        if (max(p3,p4)<min(p1,p2) || max(p1,p2)<min(p3,p4))
            cout<< "NO\n";
        else
            cout<< "YES\n";
    }
	return 0;
}