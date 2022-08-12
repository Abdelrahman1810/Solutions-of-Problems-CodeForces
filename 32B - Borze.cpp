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
#define floi for(int i=0;i<n;i++)
#define floj for(int j=0;j<n;j++)
 
int main()
{
    string a; cin>>a;
    for (int i=0; i<a.size(); i++)
    {
        if (a[i]=='-'&&a[i+1]=='.') cout<<1,i++;
        else if (a[i]=='-'&&a[i+1]=='-') cout<<2,i++;
        else  cout<<0;
    }
	return 0;
}