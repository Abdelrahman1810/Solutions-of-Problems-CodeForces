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
    int t; cin>>t;
    while (t--)
    {
        int n; cin>>n; int a[n], Alice=0, Bob=0;
        for(int i=0; i<n; i++) cin>> a[i];
        sort(a, a+n); reverse(a, a+n);
        for (int i = 0; i < n; i++) (Alice>Bob)? Bob+=a[i]:Alice+=a[i];
        (Bob==Alice)? cout<<"YES\n":cout<<"NO\n";
    }
	return 0;
}