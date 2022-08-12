#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, a=0, g=0; string s=""; cin>>n;
    while(n--)
    {
        int A, G; cin>>A>>G;
        if(a+A-g>500)
            s+="G", g+=G;
        else
            s+="A", a+=A;
    }
    cout<<s;
    return 0;
}