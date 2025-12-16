#include <iostream>
using namespace std;

void rotate(int image[4][4]);

int main()
{
    system("cls");
    int image[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}};

    rotate(image);

    return 0;
}

void rotate(int image[4][4])
{
    cout << "Original image is below :\n";
    for (int m = 0; m < 4; m++)
    {
        for (int n = 0; n < 4; n++)
        {
            cout << image[m][n] << "  ";
        }
        cout << endl;
    }
    int transpose[4][4];
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            transpose[j][i] = image[i][j];
        }
    }
    int t = 3;
    for (int k = 0; k < 4; k++)
    {

        for (int x = 0; x < 4; x++)
        {
            image[k][x] = transpose[t][x];
        }
        t--;
    }

    cout << "Counter clock wise rotated image is below :\n";
    for (int m = 0; m < 4; m++)
    {
        for (int n = 0; n < 4; n++)
        {
            cout << image[m][n] << "  ";
        }
        cout << endl;
    }
}
