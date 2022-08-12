#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int y;
    cin >> y;
    int x[y];

    for (int i = 0; i < y; i++)
    
        cin >> x[i];
    
    sort( x, x+y);

    for (int i = 0; i < y; i++)
    
        cout << x[i] << " ";
	
	return 0;
}