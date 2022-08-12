#include <iostream>
#include <string.h>
#include <string>
#include <sstream>
using namespace std;

int total(int z, int x1, int x2, int x3, int x4)
{
    
    switch (z)
    {
    case 1:
        return x1;
        break;
    case 2:
        return x2;
        break;
    case 3:
        return x3;
        break;
    case 4:
        return x4;
        break;
    
    default:
        break;
    } 
}

int main()
{
    int x1, x2, x3, x4;
    char a[100000];
    cin >> x1 ;
    cin >> x2 ;
    cin >> x3 ;
    cin >> x4 ;
    cin >> a;
    int sum = 0, s = strlen(a);

    for (int i = 0; i < s; i++) 
    {
        stringstream str;
     
        str << a[i]; int z; str >> z;

        sum += total(z, x1, x2, x3, x4);
    }
    
    cout << sum;
    return 0;
}
