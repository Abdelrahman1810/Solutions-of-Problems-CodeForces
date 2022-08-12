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

int t, n, a[52];

int main()
{
    cin >> t;
    while (t--)
    {
        cin>> n;
        bool r=false;
        int odd =0;
        for (int i=0; i<n; i++) cin>> a[i];
        sort(a, a+n);
        for (int i=0; i <(n-1); i++)
            if (a[i+1]-1 == a[i])
                {r = true;break;}
        for (int i=0; i<n; i++)
            if (a[i]%2) odd++;
        (odd%2==0 || r)? cout<<"YES\n":cout<<"NO\n";
    }
	return 0;
}