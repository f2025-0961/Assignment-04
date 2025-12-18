#include <iostream>
#include <vector>
using namespace std;

void reverse(vector<int> &vec);

// reverse elements
int main()
{
    system("cls");
    vector<int> vec;
    for (int i = 0; i < 4; i++)
    {
        int temp;
        cout << "enter number: " << endl;
        cin >> temp;
        vec.push_back(temp);
    }
    cout << " vector you entered is: \n";
    for (int v : vec)
    {
        cout << v << " ";
    }
    cout << endl;
    reverse(vec);
    cout << "reversed vector is: \n";
    for (int v : vec)
    {
        cout << v << " ";
    }

    return 0;
}

void reverse(vector<int> &vec)
{
    int start = 0, end = vec.size() - 1;
    while (start < end)
    {
        int temp = vec[end];
        vec[end] = vec[start];
        vec[start] = temp;
        start++;
        end--;
    }
}