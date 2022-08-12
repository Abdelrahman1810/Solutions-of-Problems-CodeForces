
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
        int n; cin>> n;
        int a[n+1];
        for (int i=0; i<n; i++) cin>> a[i];
        sort(a, a+n);
        int ans=0;
        for (int i=1; i<n; i++)
            ans+=a[i]-a[0];
        cout << ans nn;
    }
	return 0;
}
