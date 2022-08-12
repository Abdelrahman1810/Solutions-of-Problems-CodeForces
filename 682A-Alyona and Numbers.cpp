// https://codeforces.com/contest/682/my

#include <iostream>
#include <algorithm>

using namespace std;
#define nn <<endl
#define ll long long int

int main()
{
    
    ll n, m, x, y, z = 0;
    cin >> n>> m;
    y = max(n,m);
    z = min(n,m);

    if (y%5 == 0)
    {
        x = y/5;
        cout << x*z;
    }
    else
    {
        int d = y%5;
        ll sum = (y/5)*z;
        
        for (int i = 1; i <= d; i++)
            for (int j = 1; j <= z; j++)
                if ((j+i)%5 == 0)
                    sum++;

        cout << sum;
    }

    return 0;
}