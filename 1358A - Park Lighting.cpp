#include <iostream>
using namespace std;
int main()
{
	int t;cin>>t;
	while (t--)
	{
		int n, m; cin>>n>>m;
		if (m%2==0 || n%2==0)
			cout<< m*n/2 <<endl;
		else
			cout<< (m*(n/2) + (1+m)/2) <<endl;
	}
	return 0;
}