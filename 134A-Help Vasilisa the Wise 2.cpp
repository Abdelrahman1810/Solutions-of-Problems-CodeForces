// https://codeforces.com/contest/143/problem/A

#include <iostream>

using namespace std;
#define nn <<endl
#define ll long long int

int main()
{
    int r1, r2, c1, c2, d1, d2;
    bool t[6]={false, false, false, false, false, false,};
    cin >> r1>> r2>> c1>> c2>> d1>> d2;

    for (int i = 1; i <= 9; i++)
    {
        for (int j = 1; j <= 9; j++)
        {
            for (int k = 1; k <= 9; k++)
            {
                for (int l = 1; l <= 9; l++)
                {
                    if (i!=j && i!=k && i!=l && j!=k && j!=l && k!=l)
                    {
                        if ((i + j) == r1)
                            t[0] = true;
                        else
                            t[5] = false;
                        if ((i + k) == c1)
                            t[1] = true;
                        else
                            t[0] = false;
                        if ((i + l) == d1)
                            t[2] = true;
                        else
                            t[1] = false;
                        if ((l + k) == r2)
                            t[3] = true;
                        else
                            t[2] = false;
                        if ((l + j) == c2)
                            t[4] = true;
                        else
                            t[3] = false;
                        if ((k + j) == d2)
                            t[5] = true;
                        else
                            t[4] = false;

                        
                        if (t[0]&&t[1]&&t[2]&&t[3]&&t[4]&&t[5])
                        {
                            cout << i << " " <<j nn << k << " " << l;
                            exit(0);
                        }
                        
                    }
                    
                }
                
            }
    
        }
        
    }
    cout <<-1;
    return 0;
}