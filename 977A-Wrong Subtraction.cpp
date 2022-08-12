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
    int n, k;
    cin >> n >> k;

    for (int i = 0; i < k; i++) 
    {
        if (n%10)
        {
            n--;
            continue;
        }
        n /= 10;
    }
    
    cout << n;
    return 0;
}