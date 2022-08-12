#include <iostream>
using namespace std;
#define loopi for(int i=0;i<n;i++)

bool r=0;
int main ()
{
    int t; cin>>t;
    while (t--)
    {
        string s; cin>>s;
        int n=s.size(), b=0, a=0;
        loopi
            (s[i]=='B')? b++:a++;
        cout<<((b==a)? "YES\n":"NO\n");
   }
   return 0;
}