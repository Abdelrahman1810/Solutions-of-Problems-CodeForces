#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<int> already_have;
    int buy = 0;
    for (int i = 0; i < 4; i++)
    {
        int z;
        cin >> z;
        already_have.insert(z);
    }

    set<int>::iterator it;

    for(it=already_have.begin();it!=already_have.end();it++)
    
      buy++;   

    cout << (4-buy);    
    return 0;
}