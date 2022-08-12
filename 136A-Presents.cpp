#include <iostream>
#include <set>
#include <utility>
using namespace std;

int main()
{
    int n_friends;
    cin >> n_friends;

    set <pair<int,int> > presents;
    pair<int,int> p;

    for (int i = 1; i <= n_friends; i++)
    {
        cin >> p.first;
        p.second = i;
        presents.insert(p);
    }

    set<pair<int,int> >::iterator it;

    for( it=presents.begin() ; it!=presents.end() ; it++)    
    
        cout << (*it).second << " ";
    
    return 0;
}