#include <iostream>
using namespace std;

int main()
{
    int n,k,l=0;
    cin >> n>> k;
    char arr[k];

    for (int i = 0; i < k; i++)
    
        arr[i] = 97+i;
    
    for (int i = 0; i < n; i++)
    {
        cout << arr[l];
        l++;

        if (l == (k) )
        
            l=0;
        
    }
    

    return 0;
}