#include <iostream>
using namespace std;
#define nn <<endl
int main ()
{
    int t; cin>>t;
    while (t--)
    {
        char c, x;
        string a, b;
        int ans=0, y, z;
        cin>> a>> b;
        for (int i=1; i<b.size(); i++)
        {
            c=b[i-1], x=b[i];
            y=a.find(c)+1, z=a.find(x)+1;
            ans+=abs(y-z);
        }
        cout<< ans nn;
    }   
   return 0;
}