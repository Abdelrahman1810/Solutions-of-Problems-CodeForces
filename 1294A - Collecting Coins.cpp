
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
        db a, b, c, n; cin>> a>> b>> c>> n;
        db A= (n-2*a+b+c)/3, B= (n-2*b+a+c)/3, C= (n-2*c+b+a)/3;
        cout<< ((int(A)+int(B)+int(C)!=n || A<0||B<0||C<0)? "NO\n":"YES\n");
    }  
	return 0;
}