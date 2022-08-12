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
        int w, h, n; cin>>w >>h >>n; int ans=1;
        if (w%2==0) while (w%2==0) ans*=2, w/=2;
        if (h%2==0) while (h%2==0) ans*=2, h/=2;
        (ans>=n)? cout<<"YES\n":cout<<"NO\n";
    }
	return 0;
}