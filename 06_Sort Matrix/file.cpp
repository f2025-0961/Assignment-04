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

    sort(matrix);

    cout << "Sorted Matrix:\n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

void sort(int matrix[3][3])
{
    int arr[9];
    int k = 0;

    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            arr[k++] = matrix[i][j];

    for (int i = 0; i < 8; i++)
    {
        for (int j = i + 1; j < 9; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    k = 0;
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            matrix[i][j] = arr[k++];
}
