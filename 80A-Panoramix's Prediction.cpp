// https://codeforces.com/contest/80/problem/A

#include <iostream>
using namespace std;

int main()
{
    int n, m, a = -2, b = -2;
    cin >> n >> m;

    int x[15] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47};

    for (int i = 0; i < 15; i++)
    {
        if (x[i] == n)
            a = i;
        
        if (x[i] == m)
            b = i;
    }
    
    if (a == -2 || b == -2)
        cout << "NO";
    
    else if (b == (a+1))
        cout << "YES";

    else
        cout << "NO";

    return 0;
}