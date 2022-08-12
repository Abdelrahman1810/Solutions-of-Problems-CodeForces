#include <iostream>
#include <string.h>
#include <set>
using namespace std;

int main()
{
    int d=0;
    set <char> x;
    char c[120];
    cin >> c;
    int n = strlen(c);

    for (int i = 0; i < n; i++)
        x.insert(c[i]);

    set <char> :: iterator i;
    for(i = x.begin(); i != x.end();i++)
        d++;

    (d%2)? cout << "IGNORE HIM!": cout << "CHAT WITH HER!";
    return 0;
}