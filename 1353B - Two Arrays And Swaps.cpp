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
#define flo for(auto i:

#define i0 for(int i=0; i<
#define i1 for(int i=1; i<
#define oi ;i++)

#define j0 for(int j=0; j<
#define j1 for(int j=1; j<
#define oj ;i++)

int t;

int main()
{
    cin >>t;
    while (t--)
    {    int n, k;
        cin>> n>> k;
        int a[n], b[n];
        for (int i = 0; i < n; i++) cin>> a[i];
        for (int i = 0; i < n; i++) cin>> b[i];
        sort(a, a+n);
        sort(b, b+n);
        reverse(a, a+n);
        reverse(b, b+n);
        ll sum = 0, cnt=0;
        for (int i = 0; i < k; i++)
            if (b[i]>a[n-i-1])
            {
                sum+=b[i];
                cnt++;
            }
        for (int i = 0; i < (n-cnt); i++)
            sum+=a[i];
        cout << sum nn;
    }
	return 0;
}