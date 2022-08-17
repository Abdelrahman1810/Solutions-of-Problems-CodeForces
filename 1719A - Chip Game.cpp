#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while (t--)
    {
        int n, m, f; cin>>n>>m;
        for(int i=1;;i++){
            if (i%2)
            {
                if(n>0)
                    n = bool(!(n%2));
                else if (m>0)
                    m = bool(!(m%2));
                else {
                    cout<<"Tonya"<<endl;
                    break;
                }
            }
            else
            {
                if(n>0)
                    n = bool(!(n%2));
                else if (m>0)
                    m = bool(!(m%2));
                else{
                    cout<<"Burenka"<<endl;
                    break;
                }
            } 
        }
    }
}