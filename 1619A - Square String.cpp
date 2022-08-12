#include <iostream>
using namespace std;
 
int main ()
{
	int t; cin>>t;
	while (t--)
	{
		int n;
		string s, a="", b=""; cin>>s; n= s.size();
		if (n%2)
			cout<< "NO\n";
		else
		{
			for (int i=0; i<n/2 ;i++)
			{
				a+=s[i];
				b+=s[n/2+i];
			}
			cout<< ((a==b)?"YES\n":"NO\n");
		}
	}
}