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
#define ee <<" "<<
#define ee_ <<" "
#define ll long long int
#define db double
#define fl float

int pl (int b)
{
    int ans=0;
    for (int i = 0; i < b; i++) ans+=pow(10, i);
    return ans;
}

int main()
{
    int t; cin>>t;
    while (t--)
    {
        int n; cin>> n;
        int a=n, b=0;
        while (a) a/=10,b++;
        int ans=(b-1)*9, k=pl(b);
        for (int i=k ; i<=n ;i+=k ) ans++;
        cout<< ans nn;
    }
	return 0;
}