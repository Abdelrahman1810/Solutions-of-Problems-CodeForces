#include <iostream>
using namespace std;
 
int main()
{
    long long int n, b, d, total = 0, sum = 0, size;
    cin>> n>> b>> d;
 
    for (int i = 0; i < n; i++)
    {
        cin >> size;
 
        if (size <= b)
        {
            total += size;

            if (total > d)
            {
                sum++;
                total = 0;
            }

        }   
        
    }
    
    cout << sum;
 
    return 0;
}