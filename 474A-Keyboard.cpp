#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char q;

    cin >> q;

    string c = {"qwertyuiopasdfghjkl;zxcvbnm,./"};

    int n = c.length();

    char x[n+1];

    strcpy(x, c.c_str());

    string s;

    cin >> s;

    int n2 = s.length();

    char a[n2+1];

    strcpy(a, s.c_str());

    if (q == 'R')
    {

        for (int i = 0; i < n2; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (a[i] == x[j])
                
                    cout << x[j-1];
            }
            
        }
    }

    else
    {
        for (int i = 0; i < n2; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (a[i] == x[j])
                {
                    cout << x[j+1];
                }
            }
            
        }

    }
    
    return 0;
	
}