// patern program
#include <iostream>
using namespace std;
int main()
{
    int i, n = 4, j, a=1 , k, s;

    for (i = 1; i <= n; i++)
    {   
        a=1;
        for (j = 1; j <= i; j++)
        { cout<<a;
           a++;
        }
        for(s=1;s<=n-i;s++)
        {
            cout<<" ";
        }
        for(s=1;s<=n-i;s++)
        {
            cout<<" ";
        }
        k=i;
         for (j = 1; j <= i; j++)
        { cout<<k;
           k--;
        }
        cout << endl;
    }
}
