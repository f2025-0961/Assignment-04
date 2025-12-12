#include <iostream>
using namespace std;

void max_min(int array[7][4]);
void average(int array[7][4]);

int main()
{
    int temperature[7][4] = {
        {25, 27, 28, 29},
        {20, 22, 24, 25},
        {23, 22, 18, 20},
        {25, 27, 28, 29},
        {20, 22, 24, 25},
        {23, 22, 18, 20},
        {23, 22, 18, 0},
    };
    cout << endl;
    max_min(temperature);
    cout << endl;
    average(temperature);
    cout << endl;

    return 0;
}


void max_min(int array[7][4])
{
    int max = array[0][0];
    int maxDay = 0;
    int min = array[0][0];
    int minDay = 0;
    for (int i = 0; i < 7; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (max < array[i][j])
            {
                max = array[i][j];
                maxDay = i + 1;
            }
            if (min > array[i][j])
            {
                min = array[i][j];
                minDay = i + 1;
            }
        }
    }

    cout << "Highest temperature : " << max << "C on day-" << maxDay << endl;
    cout << "Lowest temperature : " << min << "C on day-" << minDay << endl;
}

void average(int array[7][4])
{
    int sum = 0;
    for (int i = 0; i < 7; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            sum = sum + array[i][j];
        }
        cout << "Average temperature on day : " << i + 1 << " is " << (sum / 4.0) << "C" << endl;
        sum = 0;
    }
}