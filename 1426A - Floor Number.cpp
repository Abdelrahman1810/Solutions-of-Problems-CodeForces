#include <iostream>
using namespace std;
#define nn <<endl
#define loop_i for(int i=0;i<n;i++)

int main()
{
    int t; cin>>t;
	while (t--)
	{
		int n, x, ans=1; cin>>n>>x;
		if (n<=2)
            cout<< ans nn;
		else
		{
			int N=n;n++;
			N-=2;
			loop_i
			{
				N-=x; ans++;
				if (N<=0) break;
			}
			cout<< ans nn;
		}
	}
}