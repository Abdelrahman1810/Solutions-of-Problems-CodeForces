#include <iostream>
using namespace std;
int main()
{
    int t; cin>>t;
    while (t--)
    {
        int n, odd=0, even=0, a; cin>>n;
        for(int i=0;i<n;i++) cin>>a,(a&1)? odd++:even++;
        if (odd==0) cout<<"NO" <<endl;
        else if (!(even)&&!(odd&1)) cout<<"NO" <<endl;
        else cout<<"YES" <<endl;
    }
    return 0;
}