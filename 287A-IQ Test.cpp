// https://codeforces.com/contest/287/problem/A

#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <utility>
#include <set>

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
    char line1[4], line2[4], line3[4], line4[4];
    lo0 4 op
        cin>>line1[i];
    lo0 4 op
        cin>>line2[i];
    lo0 4 op
        cin>>line3[i];
    lo0 4 op
        cin>>line4[i];

    bool w, r;
    w = r =false;

    lo0 3 op
    {
        if (line1[i] == line1[i+1]) 
        {
            if (line1[i]==line2[i]) w=1;
            else if (line1[i+1] == line2[i+1]) w=1;
        }
        if (w) {cout<<"YES"; exit(0);}


        if (line2[i] == line2[i+1]) 
        {
            if (line1[i]==line2[i]) w=1;
            else if (line1[i+1] == line2[i+1]) w=1;

            if (line3[i]==line2[i]) r=1;
            else if (line3[i+1] == line2[i+1]) r=1;
        }
        if (w||r) {cout<<"YES"; exit(0);}


        if (line3[i] == line3[i+1]) 
        {
            if (line3[i]==line2[i]) w=1;
            else if (line3[i+1] == line2[i+1]) w=1;

            if (line3[i]==line4[i]) r=1;
            else if (line3[i+1] == line4[i+1]) r=1;
        }
        if (w||r) {cout<<"YES"; exit(0);}


        if (line4[i] == line4[i+1]) 
        {
            if (line3[i]==line4[i]) w=1;
            else if (line3[i+1] == line4[i+1]) w=1;
        }
        if (w||r) {cout<<"YES"; exit(0);}
    }
    cout<<"NO";

    return 0;
}