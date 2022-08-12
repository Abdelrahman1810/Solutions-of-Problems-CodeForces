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
        string s, t;
        cin>> s>> t;
        ll n=s.size(), a=t.size();
        if (t.find('a') !=-1)
        {
            if (a==1) cout<<1 nn;
            if (a>1) cout<<-1 nn;
        }
        else
        {
            ll x = pow(2, n);
            cout << x nn;  
        }
    }
	return 0;
}