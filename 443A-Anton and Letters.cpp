#include <iostream>
#include <set>
using namespace std;
 
int main()
{
    int a = 0;
    set<char> x;
    char c;
 
    while (c != '}')
    {
        cin >> c;
        x.insert(c);
    }
 
    set<char>::iterator it;
    for (it = x.begin(); it != x.end(); it++)
    {
        if (*it >= 'a' && *it <= 'z')
 
            a++;    
    }
 
    cout << a;
    return 0;
}