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
 
int n;
 
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> n;
        cin >> s;
        int a = 0, b=0, sum = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '(' && s[i+1] == ')') i++;
            else
            {
                if (s[i] == '(') a++;
                else b++;
                if (b>a) {sum++; b--;}
            }
        }
        cout << sum nn;
    }
	return 0;
}