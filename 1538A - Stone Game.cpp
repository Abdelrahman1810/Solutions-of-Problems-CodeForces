#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while (t--)
    {
        int n, a[101]; cin>>n;
        for (int i=0;i<n;i++) cin>>a[i];
        int x = min_element(a, a+n)-a;
        int y = max_element(a, a+n)-a;
        int run = min(max(x+1,y+1), max(n-x, n-y));
        run= min(run, min(n-x, x+1)+min(n-y, y+1));
        cout<<run<<endl;
    }
    return 0; 
}