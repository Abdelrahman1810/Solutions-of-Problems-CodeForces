// https://codeforces.com/contest/1/problem/A

#include <iostream>
using namespace std;

#define ll long long int

int main()
{
    ll n, m, a;
    cin >> n>> m>> a;

    ll x = n / a;
    ll y = m / a;

    if (n%a != 0)
        x++;
    
    if (m%a != 0)
        y++;
    
    ll v = x*y;

    cout << v;


	
}