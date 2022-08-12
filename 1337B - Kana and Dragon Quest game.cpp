#include <iostream>
using namespace std;
#define nn <<endl
#define ee <<" "<<
int main ()
{
    int t; cin>>t;
    while (t--)
    {
        int h, n, m, flag=0; cin>> h>> n>> m;
        while (n)
        {
            if (h<=m*10)
            {
                flag=1;
                break;
            }
            h=(h/2)+10;
            n--;
        }
        
        if (flag || (h<=m*10)) cout<< "YES" nn;
        else cout<< "NO" nn;
    }   
   return 0;
}