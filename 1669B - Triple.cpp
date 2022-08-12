#include <iostream>
#include <set>
#include <algorithm>
using namespace std;
#define nn <<endl

int main ()
{
	int t; cin>>t;
	while (t--)
	{
		int n; cin>>n;
		int a[n], b=0, c=1, ans=-1;
		for (int i = 0; i < n; i++)
            cin>> a[i];
		sort(a, a+n);
		set<int> x;
		for (int i = 0; i < n; i++)
		{
			x.insert(a[i]);
			(b==x.size())? c++:c=1;
			b = x.size();
			if (c==3)
			{
				ans=a[i];
				break;
			}
		}
		cout<< ans nn;
	}
}