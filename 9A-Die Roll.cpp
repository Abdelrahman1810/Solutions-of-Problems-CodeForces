#include <iostream>
using namespace std;

void possibility(int dot)
{
    if (dot == 1)
        cout << 1<< "/"<<6;

    else if (dot == 5)
        cout << 5<< "/"<<6;

    else if (dot == 4)
        cout << 2<< "/"<<3;

    else
        cout << 1<< "/"<<(6 / dot);

}

int main()
{
    int n1,n2,dot,x;
    
    cin >> n1>> n2;
    
    x = max(n1, n2);

    dot = 7 - x;

    possibility(dot);

    return 0;
}