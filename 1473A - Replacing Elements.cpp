#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int t;cin>>t;
    while (t--)
    {
        int n, d, a[101]; cin>>n>>d;
        for (int i=0;i<n;i++) cin>>a[i];
        sort(a, a+n);
        cout<<((a[0]+a[1]<=d || a[n-1]<=d)? "YES\n":"NO\n");
    }
    return 0;
}