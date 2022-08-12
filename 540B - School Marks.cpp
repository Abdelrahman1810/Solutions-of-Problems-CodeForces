#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
	ll n, k, p, x, y;
	cin>>n>>k>>p>>x>>y;
    
	ll a[k], i, b=0, t=0;
	
    for(i=0; i<k; b+=(a[i]<y), t+=a[i], i++)    cin>>a[i];
	
    ll l=(n/2 - b < n - k)? (n/2-b) : (n-k);
	
    ll r = n-k-l;
	
    if(l<0 || t+l+r*y >x){
		cout<<-1;
		return 0;
	}

	while(l--)
		cout<<"1 ";
	while(r--)
		cout<<y<<" ";
	
	return 0;
}