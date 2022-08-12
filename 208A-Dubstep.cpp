// https://codeforces.com/contest/208/problem/A

#include <iostream>
#include <string.h>
using namespace std;

#define str string
#define ch char

int main()
{
    ch s[201];
    cin.getline(s, 201);

    bool t = true;

    char v;

    int n = strlen(s);

    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'W' && s[i+1] == 'U' && s[i+2] == 'B')
        {
            i += 2;

            if (!t && v != ' ' )
            {
                v = ' ';
                cout << v;
            }
            
        }
        else
        {
            t = false;
            v = s[i];
            cout << s[i];
        }
    }

    return 0;
	
}