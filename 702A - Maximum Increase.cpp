#include <iostream>
using namespace std;
int main ()
{
    int n, ans=1, b=1; cin>>n;
    int a[n]; cin>> a[0];
    for (int i=1;i<n;i++)
    {
        cin>>a[i];
        if (a[i]>a[i-1]) b++;
        else
        {
            if (b>ans) ans=b;
            b=1;
        }
    }
    if (b>ans) ans=b;
    cout<< ans;
    return 0;
}