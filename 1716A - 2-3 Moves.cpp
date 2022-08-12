#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while (t--)
	{
		long long n, ans=0; cin>>n;
		if (n%3==0)
			ans=n/3;
		else if(n>3)
			ans+=(n/3-1) + 2;
		else
			ans+=((n==2)? 1:2);
		cout<<ans<<endl;	
	}
	return 0;
}