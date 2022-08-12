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
        int n; cin>>n;
        int ans;
        (n%2==0)? ans=n/2 : ans=(n-1)/2+1;
        cout<< ans nn;
    }
	return 0;
}