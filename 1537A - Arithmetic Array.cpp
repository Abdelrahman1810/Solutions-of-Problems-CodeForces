#include <iostream>
using namespace std;
int main ()
{
    int t; cin>>t;
    while (t--){
        int i=0,n, a, sum=0; cin>>n;
        for(;i<n;i++) cin>>a,sum+=a;
        cout<< max(int(sum!=n),(sum-n))<<"\n";
    }   
   return 0;
}