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

ll t, n, a[53], b[53];

int main()
{
    cin >> t;
    while (t--)
    {
        cin>> n;
        for (int i=0; i<n; i++) cin>> a[i];
        for (int i=0; i<n; i++) cin>> b[i];
        ll A = a[0], B = b[0];
        for (int i=1; i<n; i++)
        {
            if (a[i]<A) A=a[i];
            if (b[i]<B) B=b[i];
        }
        for (int i=0; i<n; i++)
        {
            a[i] = a[i] - A;
            b[i] = b[i] - B;
        }
        ll ans = 0;
        for (int i=0; i<n; i++)
            ans += max(a[i], b[i]);
        cout<< ans nn;
    }
	return 0;
}