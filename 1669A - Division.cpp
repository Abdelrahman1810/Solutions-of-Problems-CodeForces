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
    int n;
    cin >> n;
    string x[n];
    int a;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        if (a <= 1399)
            x[i] = "Division 4";
        
        else if (a >= 1400 && a<= 1599)
            x[i] = "Division 3";
        
        else if (a >= 1600 && a<= 1899)
            x[i] = "Division 2";
        
        else
            x[i] = "Division 1";
    }
    for (int i = 0; i < n; i++)
        cout << x[i] nn;
    return 0;
}