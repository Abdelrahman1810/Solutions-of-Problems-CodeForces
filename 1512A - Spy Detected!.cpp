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
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int x[n];
        for (int i = 0; i < n; i++) cin >> x[i];

        for (int i = 0; i < n; i++)
        {
            int ans=0;
            for (int j = 0; j < n; j++)
            {
                if (x[i]!=x[j]) ans++;
                if (ans>1) {cout<< (i+1) nn; break;}
            }
            if (ans>1) break;
        }
    }
	return 0;
}
