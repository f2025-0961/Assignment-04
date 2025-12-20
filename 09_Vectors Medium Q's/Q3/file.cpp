#include <iostream>
#include <vector>
using namespace std;

// check if there is duplicate number is in vector ... !

int main()
{
    system("cls");
    vector<int> vec1 = {2, 2, 3, 4, 5, 6, 6, 5, 5, 5};
    int duplicate;
    bool dupli = false;
    for (int i = 0; i < vec1.size() - 1; i++)
    {
        int temp = vec1[i];
        for (int j = 0; j < vec1.size() - 1; j++)
        {
            if (temp == vec1[i + 1])
            {
                duplicate = temp;
                dupli = true;
            }
        }
    }
    if (dupli)
    {
        cout << "duplicate number in vector is: " << duplicate << endl
             << endl;
    }
    else
    {
        cout << "No duplicate number exists in vector" << endl;
    }

    return 0;
}