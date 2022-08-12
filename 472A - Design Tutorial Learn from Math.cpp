#include <iostream>
#include <stdio.h>
#include <vector>
#include <cmath>
#include <iomanip>
#include <math.h>
#include <set>
#include <algorithm>
#include <utility>
#include <cstring>
 
using namespace std;
#define nn <<endl
#define ee <<" "
#define ll long long int
#define flo for(auto i:
 
#define i0 for(int i=0; i< 
#define i1 for(int i=1; i<
#define oi ;i++)
 
#define j0 for(int j=0; j<
#define j1 for(int j=1; j<
#define oj ;i++)

int t, n, a, b, c;
bool Isprime (int a)
{
    int ans = 0;
    for (int i = 2; i < a; i++)
    {
        if (a%i==0)
            ans++;
        if (ans>=1)
            return 1;
    }
    return 0;
}

int main()
{
    cin >> n;
    b = 4;
    a = n-4;
    for (int i = 0; i < n; i+=2)
        if (Isprime(a-i))
        {
            cout << (b+i) ee << (a-i);
            exit(0);
        }
	return 0;
}
