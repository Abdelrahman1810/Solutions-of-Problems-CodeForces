// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=401

#include <iostream>
#include <math.h>
#include <cmath>
#include <iomanip>
#include <algorithm>
#include <utility>
#include <vector>

using namespace std;
#define nn <<endl

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
    
        pair<int,int> x[2];
        pair<int,int> y[2];


        for (int i = 0; i < 2; i++)
            cin >> x[i].first >> x[i].second;
        
        for (int i = 0; i < 2; i++)
            cin >> y[i].first >> y[i].second;
        
        bool t = max(x[0].first,y[0].first) < min(x[1].first, y[1].first);
        bool k = max(x[0].second,y[0].second) < min(x[1].second, y[1].second);

        if (i > 0)
            cout nn;

        if (t && k)
        {
            cout << (max(x[0].first,y[0].first)) <<" ";
            cout << max(x[0].second,y[0].second) <<" ";
            cout << min(x[1].first, y[1].first) <<" ";
            cout << min(x[1].second, y[1].second) nn;
        }
        else
            cout << "No Overlap" nn;
    }

    return 0;
}