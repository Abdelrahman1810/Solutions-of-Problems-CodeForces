#include <iostream>
using namespace std;
int main()
{
    long long n, m, ans=1, a=0, f=0;cin>>n;
	for(int i=0; i<n; i++)
    {
		cin>>m;
		if(m) 
            {ans*=(f ? i-a:1); a = i; f = 1;}
	}
	cout<<(f ? ans:0);
}