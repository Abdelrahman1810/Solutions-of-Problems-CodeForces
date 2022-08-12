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
    int x[n], time = 0;

    i0 n oi
        cin >> x[i];

    int min = x[n-1];
    int a=n-1;
    for (int i = n-2; i >= 0; i--)
        if (min > x[i])
        {
            min = x[i];
            a = i;
        }

    int max = x[0];
    int b=0;
    for (int i = 0; i < n; i++)
        if (max < x[i])
        {
            max = x[i];
            b = i;
        }

    if (b > a) b--;
       
    time = b + (n-a-1);
    cout << time;

    return 0;
}