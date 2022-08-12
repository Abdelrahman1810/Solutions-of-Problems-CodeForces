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

int main ()
{
	int t; cin>>t;
	while (t--)
	{
		ll n; cin>>n;
		ll a[n];
		for (int i = 0; i < n; i++)
			cin>> a[i];
		ll m, sum=0, b;
        cin>>m;
		for (int i = 0; i < m; i++)
		{
			cin>> b;
            sum+=b;
		}
		cout<< a[sum%n] nn;
	}
    
}