// https://codeforces.com/contest/707/problem/A

#include <iostream>
using namespace std;

int main()
{

    int n, m;

    bool t = false;

    cin >> n >> m;

    int z = n*m;

    char x;

    for (int i = 0; i < z; i++)
    {
        cin >> x;

        if (x == 'Y')
            t = true;
            
        if (x == 'M')
            t = true;

        if (x == 'C')
            t = true;   
    }
    
    if (t)
        cout << "#Color";

    else
        cout << "#Black&White";

    return 0;
	
}