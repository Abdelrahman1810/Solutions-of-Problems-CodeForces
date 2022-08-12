#include <iostream>
#include <stdio.h>
#include <vector>
#include <cmath>
#include <iomanip>
#include <math.h>
#include <set>
#include <algorithm>
#include <utility>
 
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
    string s;
    string s2;
    string check;
    cin >> s>> s2>> check;
    s.append(s2);

    bool r = 0;
    sort(s.begin(), s.end());
    sort(check.begin(), check.end());

    if (s == check) r = 1;
       
    if (r) cout << "YES";
    else cout << "NO";
    return 0;
}