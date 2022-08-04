// patern program
#include <iostream>
using namespace std;
int main()
{
  int i, n = 5, j, a = 1, k, s;

  for (i = 1; i <= n; i++)
  {
    for (s = 1; s <= n - i; s++)
    {
      cout << " ";
    }
    for (j = 1; j <= n; j++)
    {
      if (i == 5 || i == 1)
      {
        cout << "*";
      }
      else if (j == 1 || j == 5)
      {
        cout << "*";
      }
      else
      {
        cout << " ";
      }
    }

    cout << endl;
  }
}