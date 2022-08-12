#include <iostream>
#include <stdio.h>
#include <vector>
#include <cmath>
#include <iomanip>
#include <math.h>
#include <set>
#include <algorithm>
#include <utility>
#include <cstring>

using namespace std;
#define nn <<endl
#define ee <<" "
#define ll long long int
#define flo for(auto i:

#define i0 for(int i=0; i<
#define i1 for(int i=1; i<
#define oi ;i++)

#define j0 for(int j=0; j<
#define j1 for(int j=1; j<
#define oj ;i++)

bool suspicious (int n, string s)
{
    bool r[100];
    memset(r, 0, sizeof(r));
    r[s[0]]=1;
    for (int i = 1; i < n; i++)
        if (s[i]!=s[i-1])
        {
            if (r[s[i]]) return 0;
            r[s[i]] = 1;
        }
    return 1;
}

int t;

int main()
{
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        if (suspicious(n, s))
            cout << "YES" nn;
        else
            cout << "NO" nn;
    }
	return 0;
} 