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

ll a[101];
int main()
{
    ll t; cin>>t;
    while (t--)
    {
        int n; cin>>n; ll x[n], a=0, b=0, k=0;
        for (int i=0; i<n; i++) x[i]=pow(2, i+1);
        a+=x[n-1];
        for (int i=0; i < (n/2-1); i++) a+=x[i],k++;
        for (int i=n-2; i >= k; i--) b+=x[i];
        cout<<abs(a-b) nn;
    }
	return 0;
}