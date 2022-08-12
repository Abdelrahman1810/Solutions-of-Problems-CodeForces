// https://codeforces.com/contest/127/problem/A

#include <iostream>
#include <math.h>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    int n, k;
    cin >> n>> k;

    int x, y;
    int x1, y1;
    double z = 0.0;

    int X , Y;
    cin >> x >> y;

    while (--n)
    {
        cin >> x1 >> y1;

        X = (x - x1)*(x - x1);
        Y = (y - y1)*(y - y1);

        z += sqrt(X + Y);

        x = x1;
        y = y1;
    }
    
    cout << fixed << setprecision(6) << z * k / 50;

    return 0;
}