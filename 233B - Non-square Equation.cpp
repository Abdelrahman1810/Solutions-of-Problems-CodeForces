#include <iostream>
#include <cmath>
using namespace std;
#define ll long long

ll s(ll x)
{ ll sum=0; while (x) sum+=x%10, x/=10; return sum; }
int main()
{
    ll n; cin>>n;
    for (ll x =max((ll)0,(ll)sqrt(n)-100); x<=sqrt(n); x++)
        if(x*x+s(x)*x-n==0) {cout<<x; return 0;}
    cout<< -1;
    return 0;
}