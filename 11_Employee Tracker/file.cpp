#include <iostream>
#include <vector>
using namespace std;

struct employeeStruct
{
    string name;
    int age;
    vector<string> skills;
};

employeeStruct inputEmployee();
void displayEmployee(vector<employeeStruct> &totalEmployee);

int main()
{
    system("cls");
    vector<employeeStruct> totalEmployee;
    int num;
    cout << "Enter Number of employee: \n";
    cin >> num;
    for (int i = 0; i < num; i++)
    {
        employeeStruct emp = inputEmployee();
        totalEmployee.push_back(emp);
    }
    cout << endl;
    displayEmployee(totalEmployee);
    return 0;
}

employeeStruct inputEmployee()
{
    employeeStruct emp;
    int n;
    cout << "Enter employee name: \n";
    cin >> emp.name;
    cout << "Enter employee age: \n";
    cin >> emp.age;
    cout << "Enter how many skills employee has: \n";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string temp;
        cout << "Enter employee skills: \n";
        cin >> temp;
        emp.skills.push_back(temp);
    }
    return emp;
}

void displayEmployee(vector<employeeStruct> &totalEmployee)
{
    for (int i = 0; i < totalEmployee.size(); i++)
    {
        employeeStruct emp = totalEmployee[i];
        cout << "Name of employe: " << i + 1 << " is: \n"
             << emp.name << endl;
        cout << "Age of employe: " << i + 1 << " is: \n"
             << emp.age << endl;
        cout << "Skill of employee: \n";
        for (int j = 0; j < emp.skills.size(); j++)
        {
            string skill = emp.skills[j];
            cout << skill << endl;
        }
    }
}