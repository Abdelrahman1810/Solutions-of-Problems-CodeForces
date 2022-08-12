#include <iostream>
using namespace std;
 
int main()
{
    int group = 1,n_magnet;
    cin >> n_magnet;
    int charge[n_magnet];
 
    for (int i = 0; i < n_magnet; i++)
    
        cin >> charge[i];
    
    for (int i = 1; i < n_magnet; i++)
 
        if (charge[i-1] != charge[i])
            group++;
 
    cout << group;
    return 0;
}