// https://codeforces.com/contest/579/problem/A

#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <math.h>
#include <utility>
#include <set>
#include <algorithm>
 
using namespace std;
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
    ll n;
    cin>> n;
    int C = 0;

    while (n>0)
    {
        if (n%2) C++;
        n /= 2;
    }
    cout << C;
    
    

    return 0;
}