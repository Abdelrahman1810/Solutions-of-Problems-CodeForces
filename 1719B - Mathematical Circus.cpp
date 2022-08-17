#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while (t--)
    {
        int n, k; cin>>n>>k;
        if ((2+k*2)%4==0){
            cout<<"YES\n"; 
            for (int i = 1; i < n; i+=2)
                cout<<i<<" "<<i+1<<endl;
        }
        else if ((2+k)%4==0){
            cout<<"YES\n";
            for (int i = 1; i < n; i+=4)
                cout<<i+1<<" "<<i<<endl;
            for (int i = 3; i < n; i+=4)
                cout<<i<<" "<<i+1<<endl;
        }
        else
            cout<<"NO\n";
    }
}