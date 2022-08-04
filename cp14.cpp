//patern program
#include<iostream>
using namespace std;
int main()
{
    int i,j,k;
    

    for(i=5;i>0;i--)
    {  
        for(j=1;j<=9;j++)
        {
      if((i==5) || (i+j==6) || (j-i==4))
      {  
      cout<<"*";
      }
      else{
          cout<<" ";
      }
        }
        cout<<endl;
    }
}