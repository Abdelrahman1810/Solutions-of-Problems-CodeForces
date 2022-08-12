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
        bool x[n][n];
        for (int i=0; i<n; i++)
        {
            for(int j=0;j<n;j++)
            {
                char  l;
                cin>> l;
                if (l=='0')
                    x[i][j] = 0;
                else
                    x[i][j] = 1;
            }
        }
        bool flag = 1;
        for (int i=0; i<n; i++)
        {
            for(int j=n-2;j>=0;j--)
            {
                if (x[i][j])
                {
                    if (j==n-1 || x[i][j+1])
                    {
                        flag = 1;
                    } 
                    else if (x[i+1][j] || i==n-1)
                    {
                        flag = 1;
                    }
                    else
                    {
                        flag = 0;
                        goto out;
                    }
                }
            }
        }
        out:
        (flag)? cout<<"YES\n":cout<<"NO\n";
    }
        
	return 0;
}