#include <iostream>
using namespace std;

void sort(int matrix[3][3]);

int main()
{
    system("cls");
    int matrix[3][3] = {
        {7, 3, 2},
        {8, 4, 5},
        {1, 6, 9}};

    cout << endl;

    return 0;
}

void sort(int matrix[3][3])
{
    int temp[3][3];
    int smallest = matrix[0][0];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (smallest > matrix[i][j])
            {
                smallest = matrix[i][j];
            }
        }
    }

    for (int k = 0; k < 3; k++)
    {
        for (int n = 0; n < 3; n++)
        {
            temp[k][n] = smallest;
        }
    }
}



