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
    cin >>t;
    ll M=0, C=0;
    while (t--)
    {   
        int Mishka, Chris;
        cin>> Mishka>> Chris;
        if (Mishka>Chris) M++;
        else if (Mishka<Chris) C++;
    }
    if (M>C) cout<< "Mishka";
    else if (C>M) cout<< "Chris";
    else cout<< "Friendship is magic!^^";
	return 0;
}