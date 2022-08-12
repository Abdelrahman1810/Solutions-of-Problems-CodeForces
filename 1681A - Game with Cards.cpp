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
#define loop for(int i=0;i<n;i++)
#define loop1 for(int i=1;i<n;i++)
 
int main ()
{
	int t; cin>>t;
	while (t--)
	{
		int n, x, mx=0; cin>>n;
		for (int i = 0; i < n; i++)
		{
			cin>> x;
			mx = ((x>mx)? x:mx);
		}
		int m, mx2=0; cin>>m; x=0;
		for (int i = 0; i < m; i++)
		{
			cin>> x;
			mx2 = ((x>mx2)? x:mx2);
		}
		if (mx>mx2)
			cout<< "Alice" nn << "Alice" nn;
		else if (mx<mx2)
			cout<< "Bob" nn << "Bob" nn;
		else
			cout<< "Alice" nn << "Bob" nn;
	}
    
}