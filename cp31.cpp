// patern program
#include <iostream>
using namespace std;
int main()
{
    int i, n = 7, j, a = 1, k, s;

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if (i == 1 || i == 7 || j == 1 || j == 7)
            {
                cout << "4";
            }

            else if (i == 2 || i == 6 || j == 2 || j == 6)
            {
                cout << "3";
            }
            else if (i == 3 || i == 5 || j == 3 || j == 5)
            {
                cout << "2";
            }
            else
            {
                cout << "1";
            }
        }

        cout << endl;
    }
}
