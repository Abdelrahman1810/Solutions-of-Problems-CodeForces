#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t, n;
	for(cin>>t;t; t--){
		cin>>n;
		if(n%2){
			cout<<1<<" ";
			for(int i=2;i<=n;i+=2)
                cout<<i+1<<" "<<i<<" "; cout<<endl;
		}
		else  
            for(int i=1;i<=n;i+=2)
                cout<<i+1<<" "<<i<<" ";
	}
	return 0;
}