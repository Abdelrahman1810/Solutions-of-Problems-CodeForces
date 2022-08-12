#include <iostream>
#include <stdio.h>
#include <vector>
#include <cmath>
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
    int y;
    cin >> y;
    while (1)
    {
        y++;
        int a, b, c, d, n = y;
        while (n)
        {
            a = n%10; n /= 10;

            b = n%10; n /= 10;
           
            c = n%10; n /= 10;
           
            d = n; n = 0;
        }
        if (a!=b && a!=c && a!=d && b!=d && b!=c && d!=c)
        {
            cout << y;
            exit(0);
        }
    }
    return 0;
}