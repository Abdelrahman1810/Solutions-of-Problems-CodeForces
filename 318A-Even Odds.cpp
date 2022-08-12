// https://codeforces.com/contest/318/problem/A

#include <iostream>
using namespace std;

int main()
{
    long long int n, k, l;

    cin >> n>> k;

    if (n%2 == 0)
    {
        l = (n/2);

        if (k > l)
        {
            k = k - l;
            cout << (k * 2);
            exit(0);
        }
        else
        {
            cout << ((k*2) - 1);
            exit(0);
        }
    }
    else
    {
        l = (n/2) + 1;

        if (k > l)
        {
            k = k - l;
            cout << (k * 2);
            exit(0);
        }

        else
        {
            cout << ((k*2) - 1);       
            exit(0);
        }
    } 
    
    return 0;
}