#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t; cin>>t;
	while(t--){
		int n, k, a, ans=0; cin>>n>>k; 
		for(int i=0;i<n;i++){
			cin>>a;
			if (i<k && a>k) ans++;
		}
		cout<<ans<<endl;
	}
	return 0;
}