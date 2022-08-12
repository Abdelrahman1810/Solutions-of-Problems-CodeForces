#include <iostream>
using namespace std;

int main()
{
    int n;
    
    cin >> n;

    int x[n];

    for (int i = 0; i < n; i++)
    {
        cin >> x[i];
    }
    
    int max = x[0] , min = x[0];

    for (int i = 1; i < n; i++)
    {
        if (max < x[i])

            max = x[i];
        
        if (min > x[i])
        
            min = x[i];
    }

    int l = 0;

    for (int i = 0; i < n; i++)
    {
        if (x[i] == min || x[i] == max)
        
            l++;
    }
    

    cout << n-l;

    return 0;
	
}