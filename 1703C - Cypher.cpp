#include <iostream>
using namespace std;
int main()
{
    int t; cin>>t;
    while (t--)
    {
        int n, b;cin>>n;
        int a[n]; for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n;i++)
        {
            cin>>b; char c[b];cin>>c;
            for(int j=0;j<b;j++) a[i]+=((c[j]=='U')? (-1):1);
            if(a[i]>=10) a[i]-=10;
            else if (a[i]<0) a[i]+=10;
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
    
}