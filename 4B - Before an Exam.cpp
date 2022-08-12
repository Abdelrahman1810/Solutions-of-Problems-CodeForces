#include <iostream>
using namespace std;
int main()
{
	int d, sum, mx=0, mn=0, a[31], b[31]; cin>>d>>sum;
	for (int i=0;i<d;i++)
		cin>>a[i]>>b[i], mn+=a[i], mx+=b[i];
	if(mx<sum || mn>sum) {cout<<"NO"; return 0;}
	cout<<"YES\n";
	for (int i=0;i<d;i++)
	{
        cout<<min(b[i],sum-mn+a[i])<<" ";
        sum-=min(b[i],sum-mn+a[i]);
		mn-=a[i];
	}
    return 0;       
}