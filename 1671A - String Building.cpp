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
#define ee <<"  "
#define ll long long int
#define flo for(auto i:
 
#define i0 for(int i=0; i< 
#define i1 for(int i=1; i<
#define oi ;i++)
 
#define j0 for(int j=0; j<
#define j1 for(int j=1; j<
#define oj ;i++)
 
bool maybe (string s, int n)
{
    if (n==1) return 0;
    if (s[0]!=s[1] || s[n-1]!=s[n-2]) return 0;
    for (int i = 1; i < n-1; i++)
        if (s[i] != s[i+1] && s[i] != s[i-1]) return 0;
    return 1;
}
 
int main()
{
    int t ;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int n = s.size();
        if (maybe(s, n)) cout << "YES" nn;
        else cout << "NO" nn;
    }
	return 0;
}