#include <iostream>
using namespace std;

int main()
{
    int x,n;
    cin >> x;
    string arr[x];

    for (int i = 0; i < x; i++)
    
        cin >> arr[i];
    
    for (int i = 0; i < x; i++)
    {
        n = arr[i].length();

        if (n > 10)
        
            cout << arr[i][0]<< n-2<< arr[i][n-1]<< endl;
        
        else
            cout << arr[i]<< endl;

    }

    return 0;
}