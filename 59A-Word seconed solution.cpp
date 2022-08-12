#include <iostream>
#include <string.h>
#include <algorithm>
using namespace std;
 
int main()
{
    int d = 0, n = 0;
    char c[100],s;
    cin >> c;
    int x = strlen(c);
 
    for (int i = 0; i < x; i++)
    {
        if ( c[i] <= 'z' && c[i] >= 'a')
        
            d++;
        
        else if ( c[i] <= 'Z' && c[i] >= 'A')
        
            n++;
    }
    if ( n > d)
    {
        
        for (int i = 0; i < strlen(c); i++) {
 
            s = toupper(c[i]);
            cout << s;
        }
    }
    else
    {
 
        for (int i = 0; i < strlen(c); i++) {
 
            s = tolower(c[i]);
            cout << s;
        }
    }
 
    return 0;
}