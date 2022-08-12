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
    ll n;
    cin >> n;
    int x = 0;

    while (n)
    {
        if (n%10 == 4 || n%10 == 7) x++;
        n /= 10;
    }
    
    if (x==4 || x==7) cout << "YES";
    else cout << "NO";

    return 0;
}