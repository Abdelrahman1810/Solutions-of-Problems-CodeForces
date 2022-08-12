#include <iostream>
using namespace std;
#define nn <<endl
#define ee <<" "<<
int main ()
{
    int t; cin>>t;
    while (t--)
    {
        int a,b,c;cin>>a>>b>>c;
        cout<< max(max(c,b)-a+1,0) ee max(max(a,c)-b+1,0) ee max(max(a,b)-c+1,0) nn;
    }   
   return 0;
}