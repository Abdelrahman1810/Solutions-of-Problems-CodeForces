#include <iostream>
 
using namespace std;
#define nn <<endl
#define ll long long int
#define flo for(auto i:

#define i0 for(int i=0; i< 
#define i1 for(int i=1; i<
#define oi ;i++)

#define j0 for(int j=0; j<
#define j1 for(int j=1; j<
#define oj ;i++)
 

int main()
{
    int x, y;
    cin >> x;
    bool r=0;
    while (x--)
    {
        cin >> y;
        if (y) r = y;
    }
    if (r) cout << "HARD";
    else cout<< "EASY";
    return 0;
}