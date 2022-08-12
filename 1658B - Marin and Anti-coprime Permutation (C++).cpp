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
#define ee <<" "<<
#define ee_ <<" "
#define ll long long int
#define db double
#define fl float
#define loop for(int i=0;i<n;i++)
#define loop1 for(int i=1;i<n;i++)
int main()
{
    int t; cin>>t;
    char a[101];
    while (t--)
    {
        ll n, ans=1; cin>>n;
        if (n&1) cout<< 0 nn;
        else
        {
            n=n/2+1;
            loop1
            {
                ans*=pow(i, 2);
                ans=ans%998244353;
            }
            cout<< ans nn;
        }
    }
	return 0;
}