#include <iostream>
#include <utility>
using namespace std;

pair <long long int,long long int>  counter(int n, int sum[10000000], long long int x)
{
    int a = 0;

    for (int i = 0; i < n; i++)
    {
        if (sum[i] > 0)
        
            x += sum[i];
        

        else if (sum[i] < 0)
        
            if ((sum[i] + x) >= 0)
            
                x += sum[i];
            
            else

                a++;        
    }

    return make_pair(x,a);
}

int main()
{
    int n, a;
    long long int x;
    cin >> n>> x;
    int sum[n];

    char c;
    for (int i = 0; i < n; i++)
    {
        cin >> c;
        cin >> a;

        if (c == '-')
        
            sum[i] = -a;
        
        else if (c == '+')

            sum[i] = a;
    }

    cout << counter(n,sum,x).first << " " << counter(n,sum,x).second;
        
    return 0;
}