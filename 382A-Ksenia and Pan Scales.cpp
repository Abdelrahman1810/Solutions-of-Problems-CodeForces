#include <iostream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;
#define nn <<endl
#define ll long long int
#define flo for(a:w)
#define lo for(int i=0; i< 
#define op ;i++)

int main()
{
    string x, x1, x2, a;
    cin >> x >> a;
    int n = x.find('|');
    x1 = x.substr(0, n);
    x2 = x.substr(n+1);

    lo a.length() op
    {
        if (x1.size() <= x2.size())
            x1 += a[i];
        
        else
            x2 += a[i];
    }

    if (x1.size()==x2.size())
        cout<<x1<<"|"<<x2;
    else
        cout<< "Impossible";

    return 0;
}