#include <iostream>
#include <vector>
using namespace std;

int main()
{
    system("cls");
    vector<int> vec = {1, 2, 3, 4, 5, 9};
    vector<int> pairs;
    int target = 7;

    for (int i = 0; i < vec.size() - 1; i++)
    {
        for (int j = i + 1; j < vec.size() - 1; j++)
        {
            int sum = 0;
            sum = vec[i] + vec[j];
            if (sum == target)
            {
                pairs.push_back(vec[i]);
                pairs.push_back(vec[j]);
            }
        }
    }

    if (pairs.empty())
    {
        cout << "no pair exists!\n";
    }
    else
    {
        cout << "sum of following pair(s) is equal to: " << target << endl;
        for (int i = 0; i < pairs.size(); i = i + 2)
        {
            cout << pairs[i] << " and " << pairs[i + 1] << endl;
        }
    }

    cout << endl;
    return 0;
}