#include<iostream>
using namespace std;
int main()
{
    int i,n=5,j,totalcolumn;
    for(i=0;i<(2*n);i++)
    {
        totalcolumn=i>n ? 2*n-i:i;
        for( j=0;j<totalcolumn;j++)
        {
            cout<<"*";

        }
        cout<<endl;
    }



return 0;
}