// https://codeforces.com/contest/514/problem/A

#include <iostream>

using namespace std;
#define nn <<endl
#define ll long long int

int main()
{
    string s;
    cin >>s;
    int n = s.length();

    for (int i = 0; i < n; i++)
        if (s[i] >= '5')
            s[i] = '9' + '0'- s[i];

    s[0]= (s[0]=='0')? '9':s[0];

    cout << s;
    return 0;
}