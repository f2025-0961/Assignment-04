#include <iostream>
#include <vector>
using namespace std;

int main()
{
    system("cls");
    // ask user to input a number
    vector<int> vec;
    int num;
    cout << "Enter a number: \n";
    cin >> num;
    vec.push_back(num);

    cout << "you entered: " << vec.front();
    return 0;
}