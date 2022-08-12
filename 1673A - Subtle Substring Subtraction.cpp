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
        string s;
        cin >> s;
        int n = s.size();
        ll Alice = 0, Bob = 0;
        if (n%2==0)
            for (int i = 0; i < n; i++) Alice += s[i]-96;
            // Bob won't take any thing
        else
        {
            ll a = 0, b = 0;
            for (int i = 0; i < (n-1); i++) a += s[i]-96;
                // like zab z+a = 27 | a+b = 3 
            for (int i = 1; i < (n); i++) b += s[i]-96;
                // like snj s+n = 33 | n+j = 29
            if (a>=b)
            {
                Bob += s[n-1]-96;
                Alice = a;
            }
            else
            {
                Bob += s[0]-96;
                Alice = b;
            } 
        }
        (Alice>Bob)? cout<<"Alice ":cout<<"Bob ";
        cout<< abs(Alice - Bob) nn;
    }
	return 0;
}