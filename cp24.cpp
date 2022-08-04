// patern program
#include <iostream>
using namespace std;
int main()
{
  int i, n = 10, j, a=1 , k, s;

  for (i = 1; i <= n; i++)
  { 
    if(i<=5){
    for(j=1;j<=n;j++)
    {
        if(j==1 || j-i==0 || j==10 || j+i==11)
        {
            cout<<"*";
        }
       
        else
        {
            cout<<" ";
        }
    }
   }
    else
    {
      for(j=1;j<=n;j++)
    {
        if(j==1 || j-i==0 || j==10 || j+i==11)
        {
            cout<<"*";
        }
       
        else
        {
            cout<<" ";
        }
    }

    }
    cout << endl;
  }
}