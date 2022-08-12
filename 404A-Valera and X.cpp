// https://codeforces.com/contest/404/problem/A

#include <iostream>
using namespace std;

#define str string
#define ch char

int main()
{
    ch s, a, z, y = 'A';
    int n, x = 0;
    bool p = false;

    cin >> n;
    cin >> s >> a;

    if (s == a)
        p = true;

    for (int i = 0; i < (n*n)-2; i++)
    {
        cin >> z;

        if (z != a && z != s)        
            p = true;
        

        if (z == s)
        {
            x++;

            if (z == y)
                p = true;
        }

        y = z;
    }

    if (p)
        cout << "NO";
    
    else if (x == (2*n - 2))
        cout << "YES";
    
    else
        cout << "NO";

    return 0;
}