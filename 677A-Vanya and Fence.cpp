#include <iostream>
using namespace std;

int main()
{
    int number_friends,  fence_height,  h, width = 0;

    cin >> number_friends;
    cin >>  fence_height;

    for (int i = 0; i < number_friends; i++)
    {
        cin >>  h;

        if ( h >  fence_height)
        
            width += 2;

        else

            width++;
    }
    
    cout << width;

    return 0;
}