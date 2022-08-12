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
#define loop for(int i=0;i<n;i++)
#define loop1 for(int i=1;i<n;i++)

int main()
{
	int t;cin>>t;
	while (t--)
	{
		int n, c, s=0; cin>>n;
		set<int> a;	vector<int> x;
		for (int i=0;i<2*n;i++)
		{
			cin>>c;
            a.insert(c);
        	if (a.size()>s)
                x.push_back(c);
            s=a.size();
		}
		loop
			cout<< x[i] ee_;
		cout nn;
	}
	return 0;
}