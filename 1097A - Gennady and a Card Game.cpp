#include <iostream>
using namespace std;
 
int main ()
{
    string a, b; cin>>a;
    bool flag=0;
    for (int i=0; i<5; i++)
    {
        cin>>b;
        if (a[0]==b[0] || a[1]==b[1])
            flag=1;
    }
    cout<<((flag)?"YES\n":"NO\n");
    return 0;
}