//patern program
#include<iostream>
using namespace std;
int main()
{
    int i,n=5,j,coef=1,k;
    

    for(i=0;i<n;i++)
    {  
        
      for(j=0;j<n-i;j++)
        {
            cout<<" ";
        }
      
      for(k=0;k<=i;k++)
        {
            if(i==0 || k==0)
            {   
              coef=1;
                cout<<coef<<" ";
            }
            else{
                coef=coef*(i-k+1)/k;
                cout<<coef<<" ";
                
            }
        }
      cout<<endl;
    }
}