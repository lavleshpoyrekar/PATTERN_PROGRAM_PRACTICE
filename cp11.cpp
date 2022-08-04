//patern program
#include<iostream>
using namespace std;
int main()
{
    int i,n=5,j,a,k;
    

    for(i=n;i>0;i--)
    {  
        
      for(j=n;j>i;j--)
        {
            cout<<" ";
        }
      
      for(k=1;k<=i;k++)
        {
            cout<<"* ";
        }
      cout<<endl;
    }
}