#include <iostream>
using namespace std;
int main()
{    
    int t; cin>>t;
    while (t--)
    {
        int n,a,b,f=1; cin>>n>>a;
        for (int i=1;i<n;i++)
           {cin>>b; if (b%a) f=0;}
        cout<<(f? "YES":"NO")<<endl;
    }
    return 0;
}