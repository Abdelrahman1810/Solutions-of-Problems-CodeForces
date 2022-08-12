// https://codeforces.com/contest/270/problem/A

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, y;
    float x, r;
    cin >> n;

    vector<string> z;

    for (int i = 0; i < n; i++)
    {
        cin >> r;

        x = 360 / (180 - r);
        y = 360 / (180 - r);

        if (x == y)
            z.push_back("YES");

        else
            z.push_back("NO");
    }

    for (int i = 0; i < z.size(); i++)
    
        cout << z[i] << endl;

    return 0;
}