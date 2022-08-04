//patern program
#include<iostream>
using namespace std;
int main()
{
    int i,n=5,j,a,k;
    

    for(i=5;i>0;i--)
    {  
        
      for(j=n;j>i;j--)
        {
            cout<<" ";
        }
      
      for(k=1;k<=2*i-1;k++)
        {
            cout<<"*";
        }
      cout<<endl;
    }
}