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
    int k, w;
    ll n;
    cin >> k >> n >> w;
    ll borrowed_money, needed_money, sum_w = 0;
    
    for (int i = 1; i <= w; i++) sum_w += i;
    needed_money = sum_w * k;

    if (needed_money >= n)
    {
        borrowed_money = needed_money - n;
        cout << borrowed_money;
    }
    else cout << 0;
    
    return 0;
}