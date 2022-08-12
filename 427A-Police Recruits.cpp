#include <iostream>
using namespace std;

int main()
{
    int s, unrited = 0, police = 0, c;
    cin >> s;

    for (int i = 0; i < s; i++)
    {
        cin >> c;
        if (c > 0)
        {
            police += c;
        }
        else if (c < 0)
        {
            if (police > 0)
                police--;
            else
                unrited++;
        }
        
    }
    
    cout << unrited;
    return 0;
}
