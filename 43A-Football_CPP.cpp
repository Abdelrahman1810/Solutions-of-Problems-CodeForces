// https://codeforces.com/contest/43/problem/A

#include <iostream>
using namespace std;

int main()
{

    int n, team1 = 0, team2 = 0;

    string t1,t2,z;

    cin >> n;

    if (n != 1)
    {
        for (int i = 0; i < n; i++)
        {

            cin >> z;

            if (z == t1 || i == 0)
            {
                t1 = z;
                team1++;
            }
            
            else
            {
                team2++;
                t2 = z;
            }

        }

        if (team1 > team2)
            cout << t1;
        
        else
            cout << t2;   
    }

    else
    {
        cin >> z;
        cout << z;
    }

    return 0;
}