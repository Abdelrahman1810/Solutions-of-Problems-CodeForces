#include <iostream>
#include <stdio.h>
#include <vector>
#include <cmath>
#include <iomanip>
#include <math.h>
#include <set>
#include <algorithm>
#include <utility>
 
using namespace std;
#define nn <<endl
#define ll long long int
#define flo for(auto i:

#define i0 for(int i=0; i< 
#define i1 for(int i=1; i<
#define oi ;i++)

#define j0 for(int j=0; j<
#define j1 for(int j=1; j<
#define oj ;i++)


int main()
{
    int rows, sets, k;
    int row[k], set[k];

    int counter = 0;
    cin >> rows >> sets >> k;
    bool empty[rows][sets];

    for (int i = 0; i < rows; i++)
        for (int j = 0; j < sets; j++)
            empty[i][j] = 1;
        

    for (int i = 0; i < k; i++)
    {
        int l, o;
        cin >> l >> o;
        row[i] = l-1;
        set[i] = o-1;
    }
    cout nn nn;

    empty[row[0]][set[0]] = 0;
    cout << row[0]+1 << " " << set[0]+1 nn;

    for (int i = 1; i < k; i++)
    {
        int a = row[i];
        int b = set[i];

        if (empty[a][b] == 0)
        {
            if (empty[a-1][b] && (a-1) >= 0)
            {
                cout << a << " " << (b+1) nn;
                empty[a-1][b] = 0;
            }
            else if (empty[a][b-1] && (b-1) >= 0)
            {
                cout << a+1 << " " << (b) nn;
                empty[a][b-1] = 0;
            }
            else if (empty[a][b+1] && (b+1) <= sets)
            {
                cout << a+1 << " " << (b+2) nn;
                empty[a][b+1] = 0;
            }
            else if (empty[a+1][b] && (a+1) <= rows)
            {
                cout << a+2 << " " << (b+1) nn;
                empty[a+1][b] = 0;
            }
            else
            {
                for (int r = 0; r < rows; r++)
                {
                    for (int t = 0; t < sets; t++)
                    {
                        if (empty[r][t])
                        {
                            empty[r][t] = 0;
                            cout << r+1 << "  " << t+1 nn;
                            r = rows;
                            t = sets;
                        }
                        
                    }
                    
                }
                
            }

        }
        else
        {
            empty[a][b] = 0;
            cout << a+1 << " " << (b+1) nn;
        }
        
    }
    
    return 0;
    
}