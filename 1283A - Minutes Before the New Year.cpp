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
 
int main()
{
    int t; cin>>t;
    while (t--)
    {
        int h, m; cin>> h>> m;
        int ans=24*60 - (h*60+m); cout<< ans nn;
    }  
	return 0;
}