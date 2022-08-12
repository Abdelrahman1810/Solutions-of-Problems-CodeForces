#include <iostream>
using namespace std;

int main()
{
    int group = 1, n_magnet, x, y;
    cin >> n_magnet;
    cin >> x;
    for (int  i = 1; i < n_magnet; i++)
    {
        cin >> y;

        if (x != y)
            group++;

        x = y;
    }

    cout << group;
    return 0;
}