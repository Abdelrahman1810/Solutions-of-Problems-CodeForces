#include <iostream>
using namespace std;
int main ()
{
    int t; cin>>t;
    while (t--)
    {
        string s, a="YES"; cin>>s;
        for (int i=0;i<3;i++) s[i]=toupper(s[i]);
        cout<<((s==a)? a:"NO")<<endl;
    }   
   return 0;
}