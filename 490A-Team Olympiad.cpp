#include <iostream>
using namespace std;

int min(int p, int m, int P)
{
    int n;
    bool x = (p>m)? 1 : 0;
    if(x)
        n = (m>P)? P : m;
    else
        n = (p>P)? P : p;

    return n;
}

int main()
{
    int n,w;
    cin >> n;
    int a,programming[n],math[n],PE[n];
    int p = 0, m = 0, P = 0;
    bool x=true,y=true ,z=true;

    for (int i = 0; i < n; i++)
    {
        cin >> a;
        
        if (a == 1)
        {
            x = false; 
            programming[p] = i+1; 
            p++;
        }

        else if (a == 2)
        {
            y = false;
            math[m] = i+1;
            m++;
        }
        else if (a == 3)
        {
            z = false;
            PE[P] = i+1;
            P++; 
        }
    }

    if (x || y || z)
    {
        cout << 0;
        exit(0);
    }
    
    w = min(p,m,P);
    cout << w<< endl;
    
    for (int i = 0; i < w; i++)
    {
        cout <<programming[i]<<" " <<math[i]<< " " <<PE[i] <<endl;
    }
    
    
    


    

        
    return 0;
}