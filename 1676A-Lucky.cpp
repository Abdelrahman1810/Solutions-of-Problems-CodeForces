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
        int sum1=0, sum2=0;
        for (int i=0; i<3; i++)
        {
            sum1+=n%10;
            n/=10;
        }
        for (int i=0; i<3; i++)
        {
            sum2+=n%10;
            n/=10;
        }
        if (sum1==sum2) cout<<"YES" nn;
        else cout<< "NO" nn;
    }
	return 0;
}