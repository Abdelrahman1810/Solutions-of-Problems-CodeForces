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
 
int t;
 
int main()
{
    cin >> t;
    while (t--)
    {
        int s[7];
        for (int i=0; i < 7; i++) cin>>s[i];
        int sum = s[0] + s[1];
        cout << s[0] ee << s[1] ee << (s[6]-sum) nn;
    }
	return 0;
} 