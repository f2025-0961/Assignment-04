#include <iostream>
#include <vector>
using namespace std;

//missing number is vector 2
int main()
{
    system("cls");
    vector<int> vec1 = {2, 3, 4, 5, 6};
    vector<int> vec2 = {2, 3, 5, 6};
    int missing;
    for (int i = 0; i < vec2.size() - 1; i++)
    {
        int temp = vec1[i];
        if (temp != vec2[i])
        {
            missing = temp;
        }
    }
    cout << "missing number in vector 2 is: " << missing << endl
         << endl;
    return 0;
}