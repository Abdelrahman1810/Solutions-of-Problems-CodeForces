#include <iostream>
#include <stdio.h>
#include <vector>
#include <cmath>
#include <iomanip>
#include <math.h>
#include <set>
#include <algorithm>
#include <utility>
 
using namespace std;
#define nn <<endl
#define ll long long int
#define flo for(auto i:

#define i0 for(int i=0; i< 
#define i1 for(int i=1; i<
#define oi ;i++)

#define j0 for(int j=0; j<
#define j1 for(int j=1; j<
#define oj ;i++)


int main()
{
    int t = 4*60;
    int n_problem, arrive_t, problems_t = 0, solved = 0;
    cin >> n_problem >> arrive_t;

    t -= arrive_t;

    i1 (n_problem+1) oi
    {
        t -= i*5;
        solved++;
        if (t < 0)
        {
            cout<< --solved;
            exit(0);
        }
        else if (t == 0)
        {
            cout<< solved;
            exit(0);
        }
    }
    cout << n_problem;
    return 0;
}