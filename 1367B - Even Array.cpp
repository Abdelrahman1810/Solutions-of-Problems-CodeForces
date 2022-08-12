#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int t; cin>>t;
    while (t--)
    {
        int n; cin>>n; int a, odd=0, even=0;
        for (int i=0; i<n; i++)
        {
            cin>>a;
            if (i%2!=a%2)
                (a%2)? odd++:even++;
        }
        cout<< ((odd!=even)? -1:odd) <<endl;
    }
	return 0;
}