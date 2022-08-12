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
    int n;
    cin >> n;
    int en [n], out[n];
    i0 n oi
        cin>> out[i]>> en [i];

    ll a = en[0];
    ll capacity1 = a;

    for (int i = 1; i < n; i++)
    {
        a = a - out[i] + en[i];
        if (a > capacity1) capacity1 = a;
    }

    cout << capacity1;
    return 0;
}