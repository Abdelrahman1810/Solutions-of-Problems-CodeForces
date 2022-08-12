#include <iostream>
#include <set>
using namespace std;
 
int main ()
{
    int t; cin>>t;
    while (t--)
    {
        int n, b; cin>>n; set<int> a;
        for (int i=0; i<n; i++)
            cin>>b, a.insert(b);
        cout<< a.size() <<endl;
    }
   return 0;
}