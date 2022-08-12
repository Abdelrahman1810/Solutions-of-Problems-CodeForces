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

int t;

int main()
{
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a>> b;
        int x = min(a, b);
        int y = max(a, b);
        if (2*x>=y) cout<< (4*x*x) nn;
        else cout<< (y*y) nn;
    }
	return 0;
}