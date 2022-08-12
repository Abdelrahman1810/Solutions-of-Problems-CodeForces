#include <iostream>
#include <string.h>
#include <string>
#include <sstream>
using namespace std;
 
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
 
        switch (z)
        {
        case 1:
            sum += x1;
            break;
        case 2:
            sum += x2;
            break;
        case 3:
            sum += x3;
            break;
        case 4:
            sum += x4;
            break;
        
        default:
            break;
        }
    }
    
    cout << sum;
    return 0;
}