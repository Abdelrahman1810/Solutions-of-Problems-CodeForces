#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, ans=0; cin>>n;
    char a[n], b[n];
    for (int i=0;i<n;i++)
        cin>>a[i];
    for (int i=0;i<n;i++)
        cin>>b[i];
    for (int i=0;i<n;i++)
    {
        int x=abs(b[i]-a[i]);
        if(x>4) ans+=10-x;
        else ans+=x;
    }
    cout<<ans;
    return 0;
}