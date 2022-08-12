#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t; cin>>t;
	while(t--){
		int n, k=1; cin>>n;
		while((k<<1)<=n)
            k<<=1;
		cout<<--k<<'\n';
	}
}