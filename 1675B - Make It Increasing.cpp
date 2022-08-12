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
        int n, A=0;
        cin >> n;
        int a[33];
        for (int i=1; i <= n; i++)
            cin>> a[i];
		for(int i = (n-1); i >= 1; i--)
        {
			if(a[i+1] == 0)
            {
                A=-1;
                break;
            }
			while(a[i]>=a[i+1])
            {
                a[i]/=2;
                A++;
            }
        }
        cout<< A nn;
    }
	return 0;
}