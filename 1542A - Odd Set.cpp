#include <iostream>
using namespace std;
int main ()
{
    int t; cin>>t;
    while (t--)
    {
        int n, c, odd=0, even=0; cin>>n;
        for (int i=0; i<2*n; i++)
        {
            cin>>c;
            (c%2)?odd++:even++;
        }
        cout<<((odd==even)?"YES\n":"NO\n");
    }
   return 0;
}