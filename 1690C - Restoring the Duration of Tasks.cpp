#include<bits/stdc++.h>
using namespace std;
#define ee <<" "
int main()
{
	int t; cin>>t;
	while(t--){
		int n; cin>>n; 
		int a[n], b[n];
		for (int i=0;i<n;i++) cin>>a[i];
		cin>>b[0]; cout<<b[0]-a[0] ee;
		for (int i=1;i<n;i++){
			cin>>b[i];
			cout<< b[i]-max(a[i], b[i-1]) ee;
		}
		cout<<endl;
	}
	return 0;
}