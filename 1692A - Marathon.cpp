#include <iostream>
using namespace std;
#define nn <<endl
int main ()
{
    int t; cin>>t;
    while (t--)
    {
        int a, b, ans=0; cin>> a;
        for(int i=0;i<3;i++) 
        {
            cin>>b;
            ans+=((b>a)? 1:0);
        }
        cout<<ans nn;
    }   
   return 0;
}