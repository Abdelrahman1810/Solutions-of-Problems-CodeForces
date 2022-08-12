#include <iostream>
using namespace std;

int main()
{
    int p = 0, stone;
    cin >> stone;
    char color[stone];
 
    for (int i = 0; i < stone; i++)
    
        cin >> color[i];
    
    for (int i = 1; i < stone; i++)
 
        if (color[i-1] == color[i])
            p++;
 
    cout << p;

    return 0;
}