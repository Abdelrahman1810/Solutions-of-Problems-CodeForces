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
    ll n;
    cin >> n;
    ll x, sum = 0;

    x = n/100;
    sum += x;
    n = n - x*100;

    x = n/20;
    sum += x;
    n = n - x*20;

    x = n/10;
    sum += x;
    n = n - x*10;

    x = n/5;
    sum += x;
    n = n - x*5;
    sum += n;

    cout << sum;
    return 0;
}