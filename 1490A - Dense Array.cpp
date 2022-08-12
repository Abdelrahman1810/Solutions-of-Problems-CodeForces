#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t; cin>>t;
	while(t--){
		int n, x, y, a, b, ans=0; cin>>n>>x; 
		while (--n)
        {
            cin>>y;
            a=max(x,y);
            b=min(x,y);
            for (int i=1; b<<i < a; i++, ans++);
            x=y;
        }
        cout<<ans<<endl;
	}
	return 0;
}