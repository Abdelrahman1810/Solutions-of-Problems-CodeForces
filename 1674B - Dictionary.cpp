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
#define floi for(int i=0;i<n;i++)
#define floj for(int j=0;j<n;j++)

int main()
{
    ll t; cin >> t;
    while (t--)
    {
        char w, m;
        cin>> w>> m;
        int x = (w-96), y = (m-96);
        int start = (x-1)*25;
        if (y>x) y--;
        cout<< start+y nn;
    }
	return 0;
}