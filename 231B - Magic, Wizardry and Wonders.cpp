#include <iostream>
using namespace std;
int n,d,l,i,ans[101];
int main()
{    
    cin>>n>>d>>l;
    for (i=1;i<=n;i++)
    {
        ans[i]=((d>0)? l:1);
        d=ans[i]-d;
    }
    ans[n]-=d;
    if (ans[n]>l||ans[n]<1)
        {cout<<-1; return 0;}
    for(i=1;i<=n;i++) cout<<ans[i]<<" ";
    return 0;       
}