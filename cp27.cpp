// patern program
#include <iostream>
using namespace std;
int main()
{
    int i, n = 4, j, a = 1, k = 17, m = 14, p = 12, o = 11, s;

    for (i = 1; i <= n; i++)
    {
        for (s = 1; s <= i - 1; s++)
        {
            cout << " ";
        }

        {
            for (j = 1; j <= n - i + 1; j++)
            {
                cout <<a;
                a++;
            }
             for (s = 1; s <= 1; s++)
        {
            if(i<=3){
            cout << " ";}
        }
            for (j = 1; j <= n - i + 1; j++)
            {
                if (i == 1)
                {
                    cout << k;
                    k++;
                }
                else if (i == 2)
                    {
                        cout << m;
                        m++;
                    }
                else if(i==3)
                {
                   cout << p;
                        p++; 
                }
                else{cout<<o;}
            }
        }

        cout<< endl;
    }
}