#include <iostream>
using namespace std;

int last( int check )
{
    return check%10;
}

int main()
{
    int price, coins, n = 0;

    cin >> price;
    cin >> coins;

    bool t = true;
    int r = price;
    
        for (int i = 1; t; i++)
        {
            r = i * price;

            n = i;
            
            if (last(r) == coins || last(r) == 0)
            
                t=false;
        }
  
    cout << n;
    return 0;
}