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
    int k, l, m, n, d;
    cin >> k >> l >> m >> n >> d;
    int well_dragon = 0;

    i0 d oi
    {
        if (k%i)
            well_dragon++;
        else if (l%i)
            well_dragon++;
        else if (m%i)
            well_dragon++;
        else if (n%i)
            well_dragon++;
    }
    cout << (d - well_dragon);
    return 0;
}