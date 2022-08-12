// https://codeforces.com/contest/225/problem/A

#include <iostream>
#include <algorithm>
#include <set>

using namespace std;
#define nn <<endl

int main()
{
    
    int n, k, a, b = 0, z, N = 0, v;
    cin >> n >> k;
    set<int> x;

    set<int>::iterator it;

    for (int i = 0; i < n; i++)
    {
        x.clear();
        cin >> a;
        while (a)
        {
            z = a%10;
            x.insert(z);
            a = a/10;
        }

        v = x.size();
        for (int i = 0; i <= k; i++)
            x.insert(i);
        
        N = x.size();

        if (N == v)
            b++;
        
    }

    cout << b;

    return 0;
}