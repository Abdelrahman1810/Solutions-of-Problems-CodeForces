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
 
int t;
 
int main()
{
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string m;
        string k;
        m = "";
        int a = (n-2);
        for (int i = 0; i < a; i++)
        {
            string s;
            cin >> s;
            m+=s;
            if (i==0) k+=s;
        }
        for (int i = 2; i < m.size(); i++)
        {
            if (m[i]!=m[i-1])
            {
                k+=m[i];
                k+=m[i+1];
                i++;
            }
            else
            {
                k+=m[i+1];
                i++;
            }
            
        }
        up:
        if (k.size()<n)
        {
            k+='a';
            goto up;
        }
        cout << k nn;
    }
	return 0;
} 