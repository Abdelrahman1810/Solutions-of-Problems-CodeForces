#include <iostream>
using namespace std;
int main()
{
    int t; cin>>t;
    while (t--)
    {
        int n, ans=0; cin>>n;
        while (n)
        {
            ans+=n-n%10;
            n=n/10+n%10;
            if(!(n/10)) ans+=n,n=0;  
        }
        cout<<ans<<endl;
    }
    return 0;
}