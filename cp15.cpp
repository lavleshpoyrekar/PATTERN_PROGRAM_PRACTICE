#include <iostream>
using namespace std;
int main()
{
    int i, j, k;

    for (i = 1; i <= 9; i++)
    {
        for (j = 1; j <= 9; j++)
        {
            if (i <= 5)
            {
                if ((i + j == 6) || (j - i == 4))
                {
                    cout << "*";
                }
                else
                {
                    cout << " ";
                }
            }
            else
            {
                if ( (i + j == 14) || (i-j == 4))
                {
                    cout << "*";
                }
                else
                {
                    cout << " ";
                }
            }
        }
        cout << endl;
    }
}