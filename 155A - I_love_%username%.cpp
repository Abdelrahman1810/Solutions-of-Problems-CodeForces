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
    int n;
    cin >> n;
    int min, x[n], max, z = 0;

    cin>> x[0];
    min = x[0];
    max = x[0];

    for (int i = 1; i < n; i++)
    {
        cin >> x[i];
        if (x[i] > max)
        {
            max = x[i];
            z++;
        }
        else if (x[i] < min)
        {
            min = x[i];
            z++;
        }
    }
    
    cout << z;
    return 0;
}