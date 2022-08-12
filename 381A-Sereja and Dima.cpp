#include <iostream>
using namespace std;

int main()
{
    int p;

    cin >> p;

    int x[p];

    for (int i = 0; i < p; i++)

        cin >> x[i];
    

    int d = 0, s = 0;
    int z = 0, y = p - 1;

    bool r = true;

    while (z <= y)
    {
        if ( x[z] >= x[y] )
        {
            if (r)
                s += x[z];
            else
                d += x[z];

            z++;

        }

        else if ( x[z] < x[y] )
        {
            if (r)
                s += x[y];
            else
                d += x[y];

            y--;

        }

        if (r)
            r = false;
        else
            r = true;

    }
    

    cout << s << " " << d;

    return 0;
}