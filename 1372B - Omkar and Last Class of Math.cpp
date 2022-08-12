#include <iostream>
using namespace std;
int main ()
{
    int t; cin>>t;
    while (t--)
    {
        int a,b=1; cin>>a;
        for (int i=2; i*i<=a; i++) if(a%i==0) b=max(b,a/i);
        cout << abs(b-a)<<" "<< b<<endl;
    }   
   return 0;
}