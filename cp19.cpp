// patern program
#include <iostream>
using namespace std;
int main()
{
  int i, n = 9, j, a , k, s;

  for (i = 1; i <= n; i++)
  {
    if (i <= n - 4)
    {
      for (s = 1; s <= i; s++)
      {
        cout << "*";
      }

      for (j =1; j <= 5-i; j++)
      {
        cout <<" ";
      }

      if (i >= 1)
      {
        for (j = 4; j >=i; j--)
        {
          cout <<" ";
        }
        for(s=1;s<=i;s++)
        {
            cout<<"*";
        }
      }
    }
    else
    {
      for (s = 0; s < n-i+1; s++)
      {
        cout << "*";
      }
      for (j = 1; j <=i-5; j++)
      {
        cout <<" ";
      }
      if (i >= 6)
      {
        for (j = 1; j <= i-5 ; j++)
        {
          cout <<" ";
        }
        for(s=1;s<=n-i+1;s++)
        {
            cout<<"*";
        }
      }
    }

    cout << endl;
  }
}