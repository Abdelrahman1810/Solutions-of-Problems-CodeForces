#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while (t--)
    {
        int n, ans=0; cin>>n;
        int a[n], sum=0; for(int i=0;i<n;i++) cin>>a[i],sum+=a[i];
        if(sum%n) cout<<-1<<endl;
        else{
            sum/=n;
            for(int i=0;i<n;i++) if(a[i]>sum) ans++;
            cout<<ans<<endl;
        }
    }
    return 0; 
}