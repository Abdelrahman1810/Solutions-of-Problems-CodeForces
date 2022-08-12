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
    ll t;
    cin >> t;
    ll x1[t], y1[t], z1[t];

    i0 t oi
        cin >> x1[i] >> y1[i] >> z1[i];
        
    ll x, y, z;
    ll a, b, c;

    for (int i = 0; i < t; i++)
    {
        x = x1[i];
        y = y1[i];
        z = z1[i];
        if (x == y && x == z)
        {
            cout << "YES" nn;
            cout << x << " " << y << " " << z nn;
        }
        else if (x == y)
        {
            a = x;
            b = z;
            c = z-1;
            if(z == 1) c = b = 1;

            if (z > x) cout << "NO" nn;
            else
            {
                cout << "YES" nn;
                cout << a << " " << b << " " << c nn;
            }
        }
        else if (x == z)
        {
            a = x;
            b = y;
            c = y-1;
            if(y == 1) c = b = 1;

            if (y > x) cout << "NO" nn;
            else
            {
                cout << "YES" nn;
                cout << a << " " << b << " " << c nn;
            }
        }
        else if (y == z)
        {
            a = y;
            b = x;
            c = x-1;
            if(x == 1) c = b = 1;
            
            if (x > y) cout << "NO" nn;
            else
            {
                cout << "YES" nn;
                cout << a << " " << b << " " << c nn;
            }
        }
        else cout << "NO" nn;

    }
    return 0;
}