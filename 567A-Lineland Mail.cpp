#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int x[n],max1,max2,min1,min2;

    for (int i = 0; i < n; i++)
    
        cin >> x[i];

    cout <<abs(x[0] - x[1]) << " " << abs(x[0] - x[n-1]) <<endl;
    
    
    for (int i = 1; i < n-1; i++)
    {

        max1 = abs(x[i] - x[n-1]);

        max2 = abs(x[i] - x[0]);
        
        min1 = abs(x[i] - x[i-1]);
        
        min2 = abs(x[i] - x[i+1]);

        if (min1 < min2)

            cout << min1<< " ";

        else

            cout << min2<< " ";

        if (max1 > max2)

            cout << max1<< endl;
        
        else

            cout << max2<< endl;
    }

    cout <<abs(x[n-1] - x[n-2]) << " " << abs(x[n-1] - x[0]) <<endl;
    
    return 0;
}