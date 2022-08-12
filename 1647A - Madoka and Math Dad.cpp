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
#define ll long long int
#define flo for(auto i:
 
#define i0 for(int i=0; i< 
#define i1 for(int i=1; i<
#define oi ;i++)
 
#define j0 for(int j=0; j<
#define j1 for(int j=1; j<
#define oj ;i++)

void zero (int x, int n)
{
    string s;
    for (int i = 0; i < (x/2); i++)
    {
        s += '2';
        s+= '1';
    }
    cout << s nn;
}

void odd (int x, int n)
{
    string s;
    for (int i = 0; i < (x/2); i++)
    {
        s += '1';
        s+= '2';
    }
    s += '1';
    cout << s nn;
}

void even (int x, int n)
{
    string s;
    for (int i = 0; i < (x/2); i++)
    {
        s += '2';
        s+= '1';
    }
    s += '2';
    cout << s nn;
}
 
int main()
{
    int t ;
    cin >> t;
 
    while (t--)
    {
        int n;
        cin >> n;
        if (n%3 == 0)
        {
            int x = n/3 *2;
            zero(x, n);
        }
        else if (n%3 == 1)
        {
            int x = (n-(n%3));
            x = x/3;
            x = x*2;
            odd(x, n);
        }
        else if (n%3 == 2)
        {
            int x = (n-(n%3));
            x = x/3;
            x = x*2;
            even(x, n);
        }
    }
	return 0;
}