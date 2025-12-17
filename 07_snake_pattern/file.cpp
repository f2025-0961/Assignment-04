#include <iostream>
using namespace std;

int main()
{
    system("cls");
    int snake[4][4] = {{10, 20, 30, 40},
                       {15, 25, 35, 45},
                       {27, 29, 37, 48},
                       {32, 33, 39, 50}};

    cout << "Snake Pattern....\n";
    for (int i = 0; i < 4; i++)
    {
        if (i % 2 != 0)
        {
            for (int j = 3; j >= 0; j--)
            {
                cout << snake[i][j] << " ";
            }
        }

        else
        {
            for (int j = 0; j < 4; j++)
            {
                cout << snake[i][j] << " ";
            }
        }
    }
    cout << endl
         << endl;
    return 0;
}