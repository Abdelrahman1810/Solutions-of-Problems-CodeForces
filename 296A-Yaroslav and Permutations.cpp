// https://codeforces.com/contest/296/problem/A

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
    int a[n+1];
    int count;
    if (n==1)
    {
        cout << "YES";
        exit(0);
    }
    
 
    lo0 n op cin>>a[i];
 
    lo0 n op
    {
        count = 0;
 
        lo02 n op2
            if (a[i]==a[j]) count++;
 
        if (n < (2*count-1)) {cout << "NO"; exit(0);}
    }
 
    cout << "YES";
    return 0;
}