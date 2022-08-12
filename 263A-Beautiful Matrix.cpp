#include <iostream>
using namespace std;

int main() {

    int x, s[2];

    for (int i = 1; i <= 5; i++)
    
        for (int j = 1; j <= 5; j++)
        {
            cin >> x;
            if ( x > 0){
                s[0] = abs(3 - i);
                s[1] = abs(3 - j);

            }
        }
        

    cout << s[0] + s[1];
    
    return 0;
}