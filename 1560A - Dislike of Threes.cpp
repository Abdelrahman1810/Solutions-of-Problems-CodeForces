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

ll t, n, k;

int main()
{
    cin >> t;
    while (t--)
    {
        cin>> n;
        int a =0, ans;
        for (int i = 1; i < n*3; i++)
        {
            if (i%3!=0 && i%10!=3) a++;
            if (a==n) {ans=i; break;}
        }
        cout << ans nn;
    }
	return 0;
}