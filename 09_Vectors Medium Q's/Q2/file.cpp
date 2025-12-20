#include <iostream>
#include <vector>
using namespace std;

int main()
{
    system("cls");
    vector<int> vec1 = {2, 3, 4, 5, 6};
    vector<int> vec2 = {2, 3, 5, 6};

    int missingNum = -2;
    bool missing;

    for (int i = 0; i < vec1.size(); i++)
    {
        missing = false;
        for (int j = 0; j < vec2.size(); j++)
        {
            if (vec1[i] == vec2[j])
            {
                missing = true;
                break;
            }
        }

        if (!missing)
        {
            missingNum = vec1[i];
            break;
        }
    }

    if (missingNum != -2)
    {
        cout << "missing number in vector 2 is " << missingNum << endl;
    }
    else
    {
        cout << "no number is missing" << endl;
    }

    return 0;
}
