#include <iostream>
#include <vector>
using namespace std;

// 2D vector
int main()
{
    system("cls");
    int n;
    cout << "Enter size of vector: \n";
    cin >> n;

    vector<vector<int>> vec(n);

    for (int i = 0; i < n; i++)
    {
        cout << "Row no: " << i + 1 << endl;
        for (int j = 0; j < n; j++)
        {
            int temp;
            cout << "enter number: " << j + 1 << endl;
            cin >> temp;
            vec[i].push_back(temp);
        }
    }

    cout << "\n your entered matrix is: \n";
    for (int i = 0; i < vec.size(); i++)
    {
        for (int j = 0; j < vec.size(); j++)
        {
            cout << vec[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}