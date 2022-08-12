#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n,l;
    cin >> n;
    int z = 0, a = n;

    int x[n];

    for (int i = 0; i < n; i++)
    
        cin >> x[i];
    
    
    sort(x,x+n);
    reverse(x,x+n);

   for (int i = 1; n != 0 && n > 0; i++)
    {
        n = n - i;
        l++;

    }
    int i;
    
    if (n)
    {
        i = 2;
        cout << endl;
    }
    
    else
        i = 1;


    for (i; i < l+1; i++)
    {

        for (int j = 0; j < i; j++)
        {
            cout <<x[z]<< " " ;
            
            z++;
        }

        if (z != a)

            for (int j = -1; j < i; j++)

                cout << endl;
    }
   
    return 0;
	
}