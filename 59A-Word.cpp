#include <iostream>
#include <string.h>
#include <algorithm>
using namespace std;

void upper_case( char c[100])
{
     for (int i = 0; i < strlen(c); i++)
     {
        char s = toupper(c[i]);
        cout << s;
     }
}

void lower_case(char c[100])
{
    for (int i = 0; i < strlen(c); i++)
    {
        char s = tolower(c[i]);
        cout << s;
    }
}

int main()
{
    int d = 0, n = 0;
    char c[100];
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

        upper_case(c);
  
    else

        lower_case(c);

    return 0;
}