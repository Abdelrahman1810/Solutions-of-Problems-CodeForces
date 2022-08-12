#include <iostream>
using namespace std;
int main()
{    
    int n,k,a[51],ans=0; cin>>n>>k;k--;
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++)
        if(a[i]>=a[k]&&a[i]>0)
            ans++;
    cout<<ans;
    return 0;
}