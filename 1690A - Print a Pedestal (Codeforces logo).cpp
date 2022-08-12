#include<bits/stdc++.h>
using namespace std;
#define ee <<" "<<
#define nn <<endl
int main()
{
	int t; cin>>t;
	while(t--){
		int n, a; cin>>n; a= n/3-1;
		cout<<a+((n%3)? n%3:1) ee a+2+ bool(n%3) ee a nn;
	}
	return 0;
}