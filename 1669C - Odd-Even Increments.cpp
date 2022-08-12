#include <iostream>
#include <stdio.h>
#include <vector>
#include <cmath>
#include <iomanip>
#include <math.h>
#include <set>
#include <algorithm>
#include <utility>
 
using namespace std;
#define nn <<endl
#define ll long long int
#define flo for(auto i:
 
#define i0 for(int i=0; i< 
#define i1 for(int i=1; i<
#define oi ;i++)
 
#define j0 for(int j=0; j<
#define j1 for(int j=1; j<
#define oj ;i++)
 
 
int main()
{
    int t;
    cin >> t;
    int N = t;
    string s[t];
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        int x[n], even =0, odd=0;
        for (int j = 0; j < n; j++)
        {
            int a;
            cin >> a;
            (a%2==0)? even++ : odd++;
            x[j] = a;
        }
 
        if (even==n || odd==n) s[i] = "YES";
        else
        {
            bool r1 = 1;
            bool r2 = 1;
            for (int j = 0; j < n-1; j++)
            {
                if (r2)
                {
                    if ((x[j]%2==0 && x[j+1]%2!=0) || (x[j]%2!=0 && x[j+1]%2==0))
                        r1 = 1;
                    else
                    {
                        r1 = 0;
                        r2 = 0;
                    }
                }
            }
            if(r1) s[i] = "YES";
            else s[i] = "NO";
        }
    }
    for (int i = 0; i < t; i++)
        cout << s[i] nn;
 
    return 0;
}