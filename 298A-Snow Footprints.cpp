// https://codeforces.com/contest/298/problem/A

#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <utility>
#include <set>
#include <algorithm>
 
using namespace std;
int i = 0;
#define nn <<endl
#define ll long long int
#define flo for(auto i:
#define lo0 for(int i=0; i< 
#define op ;i++)
#define lo1 for(int i=1; i<
#define lo02 for(int j=0; j< 
#define op2 ;j++)
 
int main()
{
    int n;
    cin>> n;
    string s;
    set<char> x;
    cin>> s;
    lo0 n op x.insert(s[i]);
    int c = 0, l;

    
    if (x.size() <= 2)
    {
        char v;
        set<char>::iterator it;
        for ( it = x.begin(); it != x.end(); it++)
            v = *it;

        if (v=='R')
            c=1;

        else
        {
            int a = s.find('L');
            cout << a+1 << " " << a;
            exit(0);
        }
        
    }

    int k1 = s.find('R');
    cout << k1+1 << " ";

    reverse(s.begin(), s.end());

    int k2 = s.find('R');
    cout << n-(k2)+c;

    return 0;
}