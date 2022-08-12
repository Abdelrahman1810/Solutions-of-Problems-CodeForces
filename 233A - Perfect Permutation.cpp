#include <iostream>
using namespace std;
int main ()
{
    int t; cin>>t;
    if (t&1) cout<< -1;
    else while (t--) cout<< t+1 <<" ";
    return 0;
}