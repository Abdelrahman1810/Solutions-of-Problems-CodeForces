#include <iostream>
using namespace std;
#define nn <<endl
#define ll long long int
int main ()
{
    int t; cin>>t;
    while (t--)
    {
        ll n, m, x, a, b, ans; cin>>n>>m>>x;
        a = x/n + bool(x%n), b = x-(a-1)*n;
        ans= (b-1)*m +a;
        cout<< ans nn;
    }
    return 0;
}