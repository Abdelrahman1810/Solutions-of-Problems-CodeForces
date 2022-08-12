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
 
int t;
 
int main()
{
    cin >> t;
    while (t--)
    {
        int a, b, c, x, y;
        cin >> a>> b>> c>> x>> y;
        bool dogs = 1, cats = 1;
        if (x>a)
        {
            c = c - (x-a);
            if (c<0)
                dogs = 0;
        }
        if (y>b)
        {
            c = c-(y-b);
            if (c<0)
                cats = 0;
        }
        if (dogs && cats)
            cout << "YES" nn;
        else
            cout << "NO" nn;
    }
	return 0;
}