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
#define ee <<" "<<
#define ee_ <<" "
#define ll long long int
#define db double
#define fl float
 
int main()
{
    int t; cin>>t;
    while (t--)
    {
        int a, b; cin>> a>> b;
        if (a>b) cout<<(((a-b)%2)? 2:1) nn;
        else if (a==b) cout<<0 nn;
        else cout<<(((b-a)%2)? 1:2) nn;
    }
	return 0;
}