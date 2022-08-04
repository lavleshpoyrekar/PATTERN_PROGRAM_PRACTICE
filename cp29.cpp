// patern program
#include <iostream>
using namespace std;
int main()
{
  int i, n = 10, j, a=1 , k, s;

  for (i = 1; i <= n-1; i++)
  { 
    if(i<=5){
    for(j=1;j<=i;j++)
    {
        cout<<"*";
    }
    for(s=1;s<=n-i-5;s++)
    {
        cout<<" ";
    }
    for(s=1;s<=n-i-5;s++)
    {
        cout<<" ";
    }
    
     for(j=1;j<=i;j++)
    {
        cout<<"*";
    }

   }
    else
    {
      for(j=1;j<=n-i;j++)
    {
        cout<<"*";
    }
    for(s=1;s<=i-5;s++)
    {
        cout<<" ";
    }
     for(s=1;s<=i-5;s++)
    {
        cout<<" ";
    }
     for(j=1;j<=n-i;j++)
    {
        cout<<"*";
    }

    }
    cout << endl;
  }
}