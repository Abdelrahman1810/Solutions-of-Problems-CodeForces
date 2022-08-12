#include <iostream>
#include <set>
using namespace std;
int main ()
{
    int t; cin>>t;
    while (t--)
    {
        int ans=0,n; cin>>n; char b;
        set<char> a; for(int i=0;i<n;i++) cin>>b,a.insert(b);
        ans=a.size()+n; cout<<ans<<endl;
    }   
   return 0;
}