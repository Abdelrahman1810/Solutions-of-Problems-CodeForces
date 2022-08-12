#include <iostream>
using namespace std;
#define nn <<endl
#define ee <<" "<<
int main ()
{
    int t; cin>>t;
    while (t--)
    {
        int a, b, c, d, x;
        cin >>a>>b>>c>>d;
        if ((c+b-1)<d)
            x=(c+b-1);
        else
            x=d;
        cout<< b ee c ee x nn;
    }   
   return 0;
}