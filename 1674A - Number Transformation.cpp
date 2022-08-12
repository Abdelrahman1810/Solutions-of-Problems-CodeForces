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

pair<int,int> root (int k)
{
    for (int i=1; i<100; i++)
        for (int j=1; (j<100 && pow(i, j)<=k); j++)
            if (pow(i, j)==k)
                return std::make_pair(j, i);
    return std::make_pair(0, 0);
}

int main()
{
    ll t; cin >> t;
    while (t--)
    {
        int x, y;
        cin>> x>> y;
        pair<int,int> a;
        if (y%x==0) a = root(y/x);
        cout<< a.first ee << a.second nn;
    }
	return 0;
}