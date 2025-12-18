#include <iostream>
#include <vector>
using namespace std;

int main()
{
    system("cls");
    vector<int> vec = {1, 2, 3, 5, 4};
    cout << "\ncout by traditional loop\n";
    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << " ";
        ;
    }

    cout << "\ncout by Range - based loop\n";

    for (int v : vec)
    {
        cout << v << " ";
    }


    return 0;
}