// patern program
#include <iostream>
using namespace std;
int main()
{
  int i, n = 10, j, a , k, s;

  for (i = 1; i <= n; i++)
  {
    if (i <= n - 5)
    {
      for (s = 1; s <= n-4 - i; s++)
      {
        cout << "*";
      }

      for (j = i; j > 1; j--)
      {
        cout <<" ";
      }

      if (i >= 1)
      {
        for (j = 1; j < i; j++)
        {
          cout <<" ";
        }
        for(s=1;s<=n-i-4;s++)
        {
            cout<<"*";
        }
      }
    }
    else
    {
      for (s = 1; s < i - 4; s++)
      {
        cout << "*";
      }
      for (j = n  - i; j > 0; j--)
      {
        cout <<" ";
      }
      if (i >= 6)
      {
        for (j = 1; j <= n - i ; j++)
        {
          cout <<" ";
        }
        for(s=1;s<=i-5;s++)
        {
            cout<<"*";
        }
      }
    }

    cout << endl;
  }
}