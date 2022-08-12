#include <iostream>
using namespace std;

int time1(int n, int t, int k )
{
    int x = 0;

    if (k >= n)
    
        return t;
    
    else
    {
        while (n > 0)
        {
            n -= k;
            x += t;
        }   
        return x;
    }   
}

int time2(int n, int t, int k, int d)
{
    int new_k = 2*k, sum;
    if (d == t)
    {
        n = n -k;
        sum = (d + time1(n,t,new_k));
    }
    else if (d < t)
    {
        sum = (d + time1(n,t,new_k));
    }
    else if (d > t)
    {
        int a = d/t;
        n -= a*k;
        sum = (d + time1(n,t,new_k));
    }
    
    
    return sum;
    
}

int main()
{
    int n, t, k, d,T1,T2;
    cin>> n>> t>> k>> d; 

    T1 = time1(n,t,k);
    T2 = time2(n,t,k,d);

    if (T2 >= T1)

        cout << "NO";

    else

        cout << "YES";
    
    return 0;
}