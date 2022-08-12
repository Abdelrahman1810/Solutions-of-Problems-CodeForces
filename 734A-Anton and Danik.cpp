#include <stdio.h>
#include <iostream>
using namespace std;
 
int main()
{
    int x, d=0, a=0;
    char c;
 
    cin >> x;
 
    for (int i = 0; i < x; i++)
    {
        cin >> c;
        
        if (c == 'D')
            d++;
 
        else if (c == 'A')
            a++; 
    }
 
    if (a == d)
        cout << "Friendship";
    else
        (a > d)? cout << "Anton" : cout << "Danik";
}