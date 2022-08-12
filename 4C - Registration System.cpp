#include <iostream>
#include <string>
#include <map>
#define nn <<endl
using namespace std;
map<string,int> m;
int main()
{
	int n; cin>>n; string s;
	while (n--)
    {
        cin>>s;
        if (m[s]) cout<<s<<m[s] nn;
        else cout<<"OK" nn; m[s]++;
    }
    return 0;       
}