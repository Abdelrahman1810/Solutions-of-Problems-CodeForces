#include <iostream>
#include <map>
using namespace std;
int main()
{    
    int n,ans=0,a; cin>>n; map<int,int> m;
    for(int i=0;i<n;i++)
        cin>>a, (a==4)? (ans++):(m[a]++);
    ans+=m[2]/2; m[2]-=2*(m[2]/2);
    while (m[3]&&m[1]) m[3]--,m[1]--,ans++;
    while (m[2]&&m[1]) 
        {m[2]--,ans++; m[1]-=((m[1]>1)? 2:1);}
    for(int i=4;i>=2;i--)
        {ans+=m[1]/i; m[1]-=i*(m[1]/i);}
    ans+=m[1]+m[2]+m[3];
    cout<< ans;
    return 0;
}