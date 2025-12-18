#include <iostream>
#include <vector>
using namespace std;

//largest & smallest 
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
    int smallest = vec[0];
    int largest = vec[0];

    for (int j = 0; j < 4; j++)
    {
        if (smallest > vec[j])
        {
            smallest = vec[j];
        }
        if (largest < vec[j])
        {
            largest = vec[j];
        }
    }

    cout << "largest number you entered is: " << largest << endl;
    cout << "smallest number u entered is: " << smallest << endl;

    return 0;
}