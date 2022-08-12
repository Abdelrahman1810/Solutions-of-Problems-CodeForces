#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n, sum1 = 0, sum2 = 0, l = 0;

    cin >> n;

    int x[n];

    for (int i = 0; i < n; i++)
    
        cin >> x[i];

    sort(x,x+n);
    reverse(x,x+n);

    if (n <= 2)
    {
        if (x[0] == x[1])
        
            cout << 2;

        else

            cout << 1;
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            int j = 0;
            l = 0;
            sum1 = 0;
            sum2 = 0;
            for ( j ; j < i; j++)
            {
                sum1 += x[j];
                l++;
            }

            for ( j ; j < n; j++)
            {
                sum2 += x[j];
            }
            
            if (sum1 > sum2)
            {
                goto end;
            }
    
        }

        end:

        cout << l;
    }


    
    

    return 0;
	
}