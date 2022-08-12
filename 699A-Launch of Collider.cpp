#include <iostream>
#include <stdio.h>
#include <vector>
#include <cmath>
#include <math.h>

using namespace std;
#define nn <<endl
#define ll long long int
#define flo for(auto i:
#define lo0 for(int i=0; i< 
#define op ;i++)
#define lo1 for(int i=1; i<

int main()
{
    ll n;
    cin >> n;
    string dir;
    cin>> dir;
    ll x[n], a = pow(10,9);

    lo0 n op
        cin>> x[i];

    lo0 (n-1) op
        if (dir[i]=='R' && dir[i+1] == 'L')
            a = min(a, (x[i+1]-x[i])/2);
    
    if (a == pow(10,9))
        cout<<-1;
    else
        cout<<a;
    
    return 0;
}