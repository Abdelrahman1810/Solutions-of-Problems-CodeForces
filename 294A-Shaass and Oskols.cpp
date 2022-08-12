#include <iostream>
using namespace std;

int main()
{
    int box;
    cin >> box;
    // Take number of boxes

    int birds[box];
    // make an array of integer to point to boxes and birds in it

    for (int i = 0; i < box; i++)
    
        cin >> birds[i];

    int kill;
    cin >> kill;
    // Kill point to how many birds you have killed

    int a, b;
    // a : the number of box wich bird killed in
    // b : bird's number

    for (int i = 0; i < kill; i++)
    {
        cin >> a>> b;
        a = a -1;
        
        // all birds on the left will go to previous box
        birds[a+1] += birds[a] - b;
        
        // all birds on the right will go to next box
        birds[a-1] += b - 1;
        
        // box wich the bird was killed in must be empty
        birds[a] = 0;
    }
    
    for (int i = 0; i < box; i++)
    
        cout << birds[i]<< endl;
    
    return 0;
}