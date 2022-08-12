// https://codeforces.com/contest/289/problem/A

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
    int n, k;
    cin>> n>> k;
    int x, y, sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin>> x>> y;
        sum += y-x+1;
    }
    int count = sum;
    while (count%k) count++;

    cout << count - sum;    
    return 0;
}