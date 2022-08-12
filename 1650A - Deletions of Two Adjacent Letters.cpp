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
        string a; cin>> a;
        int n=a.size();
        char c; cin>> c;
        int x[50], A=0;
        for (int i = 0; i < a.size(); i++)
            if (c==a[i])
                x[A] = i+1, A++;
        bool ans=0;
        for (int i = 0; i < A; i++)
            if (x[i]%2!=0 && (n-x[i])%2==0)
            {
                ans=1;
                break;
            }
        (ans)? cout<< "YES\n":cout<< "NO\n";
    }
	return 0;
}