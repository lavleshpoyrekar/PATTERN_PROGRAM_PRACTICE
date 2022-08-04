//patern program
#include<iostream>
using namespace std;
int main()
{
    int i,n=5,j,totalcolumn;
    for(i=0;i<(2*n);i++)
    {
        if(i>n)
       {   
           
           totalcolumn=2*n-i;
           for(j=0;j<totalcolumn;j++)
           {
               cout<<"*";
           }
           cout<<endl;
           
       }
        else 
          {
           totalcolumn=i;
           for(j=0;j<totalcolumn;j++)
           {
               cout<<"*";
           }
           cout<<endl;
        }
        
    }
return 0;
}