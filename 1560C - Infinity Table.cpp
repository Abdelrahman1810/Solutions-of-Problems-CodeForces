#include <iostream>
using namespace std;
#define nn <<endl
#define ee <<" "<<
int main ()
{
    int t; cin>>t;
    while (t--)
    {
        int n, ro=1, a=3, b=1, c=1, co=1; cin>> n;
        for (int i = 0; i < n; i++)
        {
            if (ro-n>=0)
                break;
            co=ro+1;
            ro+=a;
            a+=2;
            b++;
        }
        int x= (co+ro)/2;
        if (x-n>0)
            cout<< n-co+1 ee b nn;
        else if (x-n<0)
            cout<< b ee ro-n+1 nn;
        else
            cout<< b ee b nn;
    }   
   return 0;
}