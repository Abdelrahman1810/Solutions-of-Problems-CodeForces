#include <iostream>
using namespace std;

int main()
{

    string s1;
    cin >> s1;
    string s2;
    cin >> s2;

    int n1 = s1.length();
    int n2 = s2.length();

    if (s1 != s2)
    
        (n1 < n2)? cout << n2 :cout<< n1;
    
    else
    
        cout << -1;
    
    return 0;
	
}