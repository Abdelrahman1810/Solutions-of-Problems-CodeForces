#include <iostream>
using namespace std;

int main()
{

    bool r, u;

    u = r = false;

    int n, x, y;

    cin >> n;

    for (int i = 0; i < (n); i++)
    {
        cin >> x;

        if (i != 0 && x > y)
        
            u = true;
        
        cin >> y;

        if (x != y)

            r = true;
    }
    
    if (r)
    
        cout <<"rated";    
    
    else if (u)
    
        cout <<"unrated";    
        
    else
        
        cout <<"maybe"; 


    return 0;
	
}