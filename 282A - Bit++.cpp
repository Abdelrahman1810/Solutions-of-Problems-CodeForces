#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, x=0; string s;
    for (cin>>n; n; n--)
    {
        cin>>s;
        (s[1]=='+')? (x++):(x--);
    }
    cout<<x;
    return 0;    
}