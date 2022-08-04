// patern program
#include <iostream>
using namespace std;
int main()
{
    int i, n = 9, j, a = 1, k, s;

    for (i = 1; i <= n; i++)
    {
        if (i <= 5)
        {
            for (s = 1; s <= n - i - 4; s++)
            {
                cout << " ";
            }
            for (j = 1; j <= i; j++)
            {
                cout << "* ";
            }
           
        }
        else
        {
            for (s = 1; s < i - 4; s++)
            {
                cout << " ";
            }
            for (j = 1; j <= n - i + 1; j++)
            {
                cout << "* ";
            }
           
        }
        cout << endl;
    }
}
