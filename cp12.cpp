//patern program
#include<iostream>
using namespace std;
int main()
{
    int i,n=5,j,a,k;
    

    for(i=1;i<=2*n-1;i++)
    {  
      if(i<=n){  
      for(j=1;j<i;j++)
        {
            cout<<" ";
        }
      
      for(k=1;k<=6-i;k++)
        {
            cout<<"* ";
        }
      cout<<endl;
    }
    else{
        for(j=1;j<=2*n-1-i;j++)
        {
            cout<<" ";
        }
      
        for(k=1;k<=i-4;k++)
        {
            cout<<"* ";
        }
      cout<<endl;
    }
    }
}