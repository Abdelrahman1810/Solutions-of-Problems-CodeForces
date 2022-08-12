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
#define ee <<"  "
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
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a>> b>> c;
        
        int d1 = 2*b-c;
        int d2 = 2*b-a;
        int d3 = a+c;
 
        if (d1%a==0 && d1>0)
            cout <<"YES" nn;
        else if (d2%c==0 && d2>0)
            cout <<"YES" nn;
        else if (d3%2==0 && (d3/2)%b==0 &&d3>0)
            cout <<"YES" nn;
        else
            cout << "NO" nn;
    }
	return 0;
}