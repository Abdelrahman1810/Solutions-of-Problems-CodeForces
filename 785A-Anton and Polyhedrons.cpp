// https://codeforces.com/contest/785/problem/A

#include <iostream>
using namespace std;

#define ll long long int
#define st string

int main()
{
    ll n = 0;

    int a;
    cin >> a;

    st check;

    st x1 = "Icosahedron";
    st x2 = "Cube";
    st x3 = "Tetrahedron";
    st x4 = "Dodecahedron";
    st x5 = "Octahedron";

    int y1 = 20;
    int y2 = 6;
    int y3 = 4;
    int y4 = 12;
    int y5 = 8;

    for (int i = 0; i < a; i++)
    {
        cin >> check;

        if ( check == x1)
            n += y1;

        else if (check == x2)
            n += y2;

        else if (check == x3)
            n += y3;
        
        else if (check == x4)
            n += y4;
        
        else
            n += y5;

    }
    
    cout << n;

    return 0;
}