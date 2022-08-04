// patern program
#include <iostream>
using namespace std;
int main()
{
  int i, n = 5, j, a, k, s;

  for (i = 1; i <= n; i++)
  { 
    for(s=1;s<=n-i;s++){
        cout<<" ";
    }
    a=i;
    for(j=1;j<=i;j++)
    { 
       
       cout<<a;
       a--;
    }
    k=2;
    for(j=1;j<i;j++)
    {
        cout<<k;
        k++;
    }
   
    
    cout << endl;
  }
}