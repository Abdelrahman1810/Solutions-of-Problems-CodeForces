#include <iostream>
using namespace std;
 
int years(int a, int b)
{
    int x = 0;
    for (int i = 0; a <= b; i++)
    {
 
        if ( a < b || a == b)
        {
            a = a * 3;
            b = b * 2;
            x++;
        }
    
    }
    return x;
}
 
 
 
int main()
{
    int a, b;
    cin >> a;
    cin >> b;
 
    cout << years( a, b);
}