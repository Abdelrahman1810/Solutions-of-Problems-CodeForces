#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

    // this function to compare tow string
int comp(string c1, string c2)
{
    int x;
    if (c1.compare(c2) < 0)
        x = (-1);
    else if (c1.compare(c2) > 0)
        x = 1;
    else if (c1.compare(c2) == 0)
        x = 0;
    return x;
}

int main()
{
    string c1, c2;
    cin >> c1;
    cin >> c2;

        // this to make all charcters in string Lower case
    for_each(c1.begin(), c1.end(), [](char & str) {
    str = tolower(str);
    });

    for_each(c2.begin(), c2.end(), [](char & str1) {
    str1 = tolower(str1);
    });
    
        // this to make all charcters in string Upper case
    //for_each(c1.begin(), c1.end(), [](char & str) {
    //str = toupper(str);
    //});

    //for_each(c2.begin(), c2.end(), [](char & str1) {
    //str1 = toupper(str1);
    //});
        

    cout << comp( c1, c2);


  return 0;
}