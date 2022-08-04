// patern program
#include <iostream>
using namespace std;
int main()
{
    int i, n = 5, j, k, s;
    char a;
    
    for (i = 1; i <= n; i++)
    
    {  
         a=70-i;
       for(j=1;j<=n-i+1;j++)
       {
           cout<<a;
           a--;
       } 
        
        cout << endl;
        
    }
}
