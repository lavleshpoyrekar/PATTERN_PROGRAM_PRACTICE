// patern program
#include <iostream>
using namespace std;
int main()
{
  int i, n = 5, j, a=1 , k, s;

  for (i = 1; i <= n; i++)
  {
    for(j=1;j<=i;j++)
    {
        if(i-j==0  || i-j==2 || i-j==4)
        {
            cout<<"1";
        }
        else
        {
            cout<<"0";
        }
    }

    cout << endl;
  }
}