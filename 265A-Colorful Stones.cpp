#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char st_colore[50], ins_color[50];
    int l = 0;

    cin >> st_colore;
    cin >> ins_color;

    int n = 0;
    int n_stones = strlen(st_colore);
    int n_instruction = strlen(ins_color);
    int j;

    for (int i = 0; i < n_stones; i++)
    {
        for (j = l; j < n_instruction; j++)
        {
            if ( st_colore[i] == ins_color[l] )
            {
                l++;
                n++;
                j = n_instruction;
            }
            else
                l++;
        }

    }

    cout << (n+1);
    return 0;
}