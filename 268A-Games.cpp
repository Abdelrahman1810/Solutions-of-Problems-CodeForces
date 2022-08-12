#include <iostream>
using namespace std;

int main()
{
    int teams, n = 0;

    cin >> teams;

    int home[teams], away[teams];

    for (int i = 0; i < teams; i++)
    {
        cin >> home[i] >> away[i];
    }
    
    for (int i = 0; i < teams; i++)

        for (int j = 0; j < teams; j++)

            if (home[i] == away[j])
            
                n++;
        
    cout << n;

    return 0;
}
