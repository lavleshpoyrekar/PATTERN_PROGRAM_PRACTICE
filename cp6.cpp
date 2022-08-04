//patern program
#include<iostream>
using namespace std;
int main()
{
    int i,n=4,j;
    

    for(i=4;i>0;i--)
    {
      for(j=1;j<i;j++)
        {
            cout<<" ";
        }
      
      for(j=i;j<=n;j++)
        {
            cout<<"*";
        }
      cout<<endl;
    }
    


}