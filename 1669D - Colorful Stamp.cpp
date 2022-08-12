#include <iostream>
using namespace std;
#define nn <<endl
 
int main ()
{
	int t; cin>>t;
	while (t--)
	{
		int n, Red=0,Blue=0; cin>>n;
		bool flag = 1;
		string s; cin>> s; s+="W";
		for (int i = 0; i <n+1; i++)
		{
			if (s[i]=='B')
				Blue=1;
			else if (s[i]=='R')
				Red=1;
			else
			{
				if (Red+Blue==1)
					flag=0;
				else
					Red=Blue=0;
			}
		}
		cout<< ((flag)? "YES":"NO") nn;  
	}
}