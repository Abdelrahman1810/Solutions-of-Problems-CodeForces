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
    int n; cin>>n;
    string s; cin>>s;
    int r=0, d=0;
    for(int i=0; i<2*n; i++)
    {
        if(s[i]=='D')
        {
            d++; r--;
            if(r<0) s+='D';
        }
        else
        {
            r++; d--;
            if(d<0) s+='R';
        }
    }
    cout<<s[2*n-1];
    
	return 0;
}