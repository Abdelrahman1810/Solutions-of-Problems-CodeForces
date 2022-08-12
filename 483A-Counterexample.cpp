// https://codeforces.com/contest/483/problem/A

#include <iostream>
using namespace std;

#define ll long long int
#define li long int

int main()
{
    ll n, m;
    cin >> n>> m;

    if (n%2)
        n++;

    if (abs(n - m) < 2)
        cout << -1;

    else
        cout << n << " "<< (n+1) << " " << n+2;
    
    return 0;
}