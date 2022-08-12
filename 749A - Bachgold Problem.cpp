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
    int n; cin>> n;
    int ans=0;
    if (n%2==0)
    {
        ans = n/2;
        cout<< ans nn;
        for (int i=0; i<ans; i++) cout<< 2 ee;
    }
    else
    {
        ans = (n-3)/2;
        cout<< ans+1 nn;
        for (int i=0; i<ans; i++) cout<< 2 ee;
        cout << 3;
    }
	return 0;
}