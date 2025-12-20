#include <iostream>
#include <vector>
using namespace std;

struct employee
{
    string employeeName;
    int employeeAge;
    vector<string> employeeSkills;
};

employee inputEmployee();
void displayEmployee(vector<employee> &totalEmployee);

int main()
{
    system("cls");
    vector<employee> totalEmployee;
    int num;
    cout << "Enter Number of employee: \n";
    cin >> num;
    for (int i = 0; i < num; i++)
    {
        employee emp = inputEmployee();
        totalEmployee.push_back(emp);
    }
    cout << endl;
    displayEmployee(totalEmployee);
    return 0;
}

employee inputEmployee()
{
    employee emp;
    int n;
    cout << "Enter employee name: \n";
    cin >> emp.employeeName;
    cout << "Enter employee age: \n";
    cin >> emp.employeeAge;
    cout << "Enter how many skills employee has: \n";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string temp;
        cout << "Enter employee skills: \n";
        cin >> temp;
        emp.employeeSkills.push_back(temp);
    }
    return emp;
}

void displayEmployee(vector<employee> &totalEmployee)
{
    for (int i = 0; i < totalEmployee.size(); i++)
    {
        employee emp = totalEmployee[i];
        cout << "Name of employe: " << i + 1 << " is: \n"
             << emp.employeeName << endl;
        cout << "Age of employe: " << i + 1 << " is: \n"
             << emp.employeeAge << endl;
        cout << "Skill of employee: \n";
        for (int j = 0; j < emp.employeeSkills.size(); j++)
        {
            string skill = emp.employeeSkills[j];
            cout << skill << endl;
        }
    }
}