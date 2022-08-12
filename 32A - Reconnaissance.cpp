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
    int n, d; cin>>n >>d;
    int a[n], ans=0;
    for (int i=0; i<n; i++)
        cin>>a[i];
    sort(a, a+n);
    for(int i=0; i<n-1; i++)
        for(int j=i+1; j<n; j++)
            if(abs(a[i]-a[j])<=d)
                ans++;
    cout<< 2*ans nn;
    return 0;
}