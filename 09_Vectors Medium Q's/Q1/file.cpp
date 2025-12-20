#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
// remove even numbers
int main()
{
    system("cls");
    vector<int> vec = {2, 2, 4, 5, 6, 7, 8};
    cout << "vector before removing even numbers is: \n";
    for (int v : vec)
    {
        cout << v << " ";
    }

    // remove evens
    for (int i = vec.size() - 1; i >= 0; i--)
    {
        if (vec[i] % 2 == 0)
        {
            vec.erase(vec.begin() + i);
        }
    }

    cout << "\nvector after removing even numbers is: \n";
    for (int v : vec)
    {
        cout << v << " ";
    }

    cout << endl;
    return 0;
}