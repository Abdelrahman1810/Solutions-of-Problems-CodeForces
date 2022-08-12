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
    int x[3], y[3];
    int a[3], b[3];
    for (int i=0; i<3; i++) cin>>x[i]>>y[i];
    a[0] = x[0]+x[1]-x[2];
    a[1] = x[2]+x[0]-x[1];
    a[2] = x[1]+x[2]-x[0];

    b[0] = y[0]+y[1]-y[2];
    b[1] = y[2]+y[0]-y[1];
    b[2] = y[1]+y[2]-y[0];
    cout<< 3 nn;
    for (int i=0; i<3; i++) cout<<a[i] ee << b[i] nn;
	return 0;
}