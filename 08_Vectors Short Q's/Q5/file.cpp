#include <iostream>
#include <vector>
using namespace std;

// count targeted number

int main()
{
    system("cls");
    vector<int> vec = {1, 2, 3, 3, 4, 3};
    int counter = 0, target = 3;

    for (int v : vec)
    {
        if (v == target)
        {
            counter++;
        }
    }

    cout << "targeted number is: " << target << " and it appears: " << counter << " times!\n\n";

    return 0;
}