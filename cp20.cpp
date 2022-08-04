// patern program
#include <iostream>
using namespace std;
int main()
{
  int i, n = 5, j, a , k, s;

  for (i = 1; i <= n; i++)
  {
    for(j=1;j<=n-1;j++)
    if (i==1 || i==5 || j==1 || j==4)
    {
        cout<<"*";
    }
    else
    {
        cout<<" ";
    }
    cout << endl;
  }
}