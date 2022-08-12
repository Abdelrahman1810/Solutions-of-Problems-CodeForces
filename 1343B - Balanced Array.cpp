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

int t, n, a, b, c;

int main()
{
    cin >> t;
    while (t--)
    {
        cin >> n;
        if (n%4==0)
        {
            cout << "YES" nn;
            int sum1 =0;
            int sum2 =0;
            for (int i = 2; i <= n; i+=2)
            {
                cout << i ee;
                sum1+=i;
            }
            for (int i = 1; i <= (n-2); i+=2)
            {
                cout << i ee;
                sum2+=i;
            }
            cout << (sum1-sum2) nn;
        }
        else
            cout << "NO" nn;
    }
	return 0;
}
