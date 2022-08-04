// patern program
#include <iostream>
using namespace std;
int main()
{
  int i, n = 7, j, a = 1, k, s;

  for (i = 1; i <= n; i++)
  {
    if (i <= n - 3)
    {
      for (s = 1; s <= 4 - i; s++)
      {
        cout << " ";
      }

      for (j = i; j >= 1; j--)
      {
        cout << j;
      }

      if (i >= 2)
      {
        for (j = 2; j <= i; j++)
        {
          cout << j;
        }
      }
    }
    else
    {
      for (s = 1; s <= i - 4; s++)
      {
        cout << " ";
      }
      for (j = n + 1 - i; j > 0; j--)
      {
        cout << j;
      }
      if (i >= 5)
      {
        for (j = 2; j <= n - i + 1; j++)
        {
          cout << j;
        }
      }
    }

    cout << endl;
  }
}