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
#define loop for (int i=0;i<n;i++)
int main()
{
    int t, n; cin>>t;
    char a[101];
    while (t--)
    {
        int ans=0;cin>> n;
        loop cin>> a[i];
        for (int i=1;i<n;i++)
        {
            if (a[i]=='0')
            {
                if (a[i-1]=='0') ans+=2;
                else if (a[i-2]=='0') ans++;
            }
        }
        cout<< ans nn;
    }
	return 0;
}