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
    int sum=0, n=t;
    for (int i=1;i<=n+2;i++)
    {
        sum+=i;
        if (t>=sum) t-=sum;
        else cout<< i-1 nn, exit(0);
    }
	return 0;
}