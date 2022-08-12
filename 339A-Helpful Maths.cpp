#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int n = s.length();
    char arr[n+1];
    strcpy(arr,s.c_str());

    for (int i = 0; i < n; i++)

        if (arr[i] == '+')

            arr[i] = 0;

    sort(arr,arr+n);

    for (int i = 0; i < n; i++)

        if (arr[i] != 0)
        {
            cout << arr[i];
            
            if (i != n-1)
            
                cout << "+";
            
        }
    

    return 0;
}
