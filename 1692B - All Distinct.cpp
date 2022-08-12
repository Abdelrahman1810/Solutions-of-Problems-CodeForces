#include <iostream>
#include <set>
using namespace std;
#define nn <<endl
int main ()
{
    int t; cin>>t;
    while (t--)
    {
        int n, a[51], b=0; cin>> n;
        set<int> d;
        for (int i=0; i<n; i++)
            cin>> a[i],d.insert(a[i]);
        if ((n-d.size())&1) b=d.size()-1;
        else b=d.size();
        cout << b nn;
    }   
   return 0;
}