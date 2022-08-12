#include <string.h>
#include <iostream>
using namespace std;

int main()
{
    int sum = 0, check = 0;
    char arr[100];

    cin >> arr;

    char ref = 'a';

    int len = strlen(arr);

    for (int i = 0; i < len; i++)
    {
        
        check = abs(ref -arr[i]);
        
        if (check <= 13)
        
            sum += check;
        
        else if (check > 13)
        
            sum += abs(check - 26);
        
        ref = arr[i];
        
    }

    cout << sum;
    return 0;
}
