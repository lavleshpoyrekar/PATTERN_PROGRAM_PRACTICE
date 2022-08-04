// patern program
#include <iostream>
using namespace std;
int main()
{
  int i, n = 3, j , k, s;

  for (i = 1; i <= n; i++)
  {
    for(j=1;j<=3*n;j++)
    {
        if(j<=3)
        {
            if(i+j==4)
            {
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        if(j==4 || j==5)
        {
            if(j-i==2)
            {
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        if(j==6 || j==7)
        {
            if(j+i==8)
            {
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        if(j==8 || j==9)
        {
            if(j-i==6)
            {
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
      
    }

    cout << endl;
  }
}