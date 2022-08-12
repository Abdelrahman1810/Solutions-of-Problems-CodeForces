#include <iostream>
#include <map>
#define ll long long
using namespace std;
int main()
{
    map<char,ll> m; ll a=0; string s; cin>>s;
    for (int i=0;i<s.size();i++) m[s[i]]++;
    for (int i=1;i<300;i++) a+=m[i]*m[i];
    cout<<a;
    return 0;
}