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
	 int t; cin>>t;
	while (t--)
	{
		int n, x[301]; cin>>n;
		loop_i cin>>x[i];
		for (int i=0, j=n-1; i<(n/2); i++, j--)
			cout<< x[i] ee x[j] ee_;
		if (n%2) cout<< x[n/2] nn;
		else cout nn;
	}
}