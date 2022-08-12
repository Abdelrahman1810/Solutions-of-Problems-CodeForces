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
#define loop_i for(int i=0;i<n;i++)
#define loop1_i for(int i=1;i<n;i++)
#define loop1_j for(int j=1;j<n;j++)
#define loop_j for(int j=0;j<n;j++)

int main()
{
	int n, ans=1; cin>>n;
	for (int i=2; i<=n/2; i++)
		if ((n-i)%i==0)
            ans++;
	cout<< ans ;
	return 0;
}