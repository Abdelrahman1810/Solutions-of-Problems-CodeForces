#include <iostream>
using namespace std;
#define nn <<endl
int solve (int a, int b, int c)
{
    int mx = 2*(b-a);
    if ((b-a)<a || c>mx) return -1;
    if ((c+b-a)>mx)
        return c+b-a-mx;
    return c+b-a;
}
int main ()
{
    int t; cin>>t;
    while (t--)
    {
        int a, b, c; cin>> a>> b>> c;
        cout<< solve(min(a,b), max(a,b), c) nn;
    }   
   return 0;
}