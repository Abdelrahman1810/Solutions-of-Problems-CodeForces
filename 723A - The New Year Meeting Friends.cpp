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

int t, n, a, b, c;

int main()
{
    int x[3]
    cin >> a>> b>> c;
    int m1 = max(a, b);
    int m2 = min(a, b);
    m1 = max(m1, c);
    m2 = min(m2, c);
    cout << m1-m2 nn;
	return 0;
}
