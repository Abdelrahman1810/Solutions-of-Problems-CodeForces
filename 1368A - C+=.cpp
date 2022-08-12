#include <iostream>
using namespace std;
int t, a, b, n, i;
int main ()
{
    cin>>t;
    while (t--)
    {
        cin>>a>>b>>n;
        for (i=0;a<=n&&b<=n;i++) (2*a+b>2*b+a)? b+=a:a+=b;
        cout<< i<<endl;
    }   
   return 0;
}