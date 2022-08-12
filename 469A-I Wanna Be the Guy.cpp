//  https://codeforces.com/contest/469/problem/A

#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<int> a;
    int n, x, y, c;

    cin >> n >> x;


    for (int i = 0; i < x; i++)
    {
        cin >> c;
        a.insert(c);
    }

    cin >> y;

    for (int i = 0; i < y; i++)
    {
        cin >> c;
        a.insert(c);
    }
    

    if (a.size() == n)
        cout << "I become the guy.";

    else
        cout << "Oh, my keyboard!";
    
    return 0;
}