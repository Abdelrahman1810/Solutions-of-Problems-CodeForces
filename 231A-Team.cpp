#include <iostream>
using namespace std;
 
int main()
{
  int x, c = 0;
  cin >> x;
 
  for (int i = 0; i < x; i++)
    {
      int t = 0;
      for (int j = 0; j < 3; j++)
        {
          int a;
          cin >> a;
          t += a;
        }
      if (t > 1)
        c++;
    }
  cout << c;
  return 0;
}