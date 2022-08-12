// https://codeforces.com/contest/287/problem/B

#include <iostream>
#include <stdio.h>
#include <vector>
#include <cmath>
#include <math.h>

using namespace std;
#define nn <<endl
#define ll long long int
#define flo for(auto i:
#define lo0 for(int i=0; i< 
#define op ;i++)
#define lo1 for(int i=1; i<


int main()
{
    ll n, k;
    cin>>n >>k;

    if (n == 0 || n == 1) {cout << (0); exit(0);} // OK
    k--;
    n--;
    if (n <= k) {cout << (1); exit(0);} // OK

    ll o = 0;
    for (int i = k; i >= 1; i--)
    {
        n -= i;
        o++;
        if (n <= 0) {cout << o;  exit(0);}
    }
    cout << -1;

    return 0;
}