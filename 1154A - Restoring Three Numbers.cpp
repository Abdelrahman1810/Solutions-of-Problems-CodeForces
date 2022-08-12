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
    int a[5];
    cin >> a[0] >> a[1] >> a[2] >> a[3];

    int x = a[0];
    int b = 0;
    for(int i = 0; i < 4; i++)
    {
        if (x < a[i])
        {
            x = a[i];
            b = i;
        }
    }

    for (int i = b; i < 4; i++)
        a[i] = a[i+1];

    int k = a[0] + a[1] - a[2];
    cout << (k/2) << " ";
    k = a[2] + a[0] - a[1];
    cout << (k/2) << " ";
    k = a[1] + a[2] - a[0];
    cout << (k/2) << " ";
    return 0;
}