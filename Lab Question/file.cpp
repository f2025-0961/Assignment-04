#include <iostream>
#include <vector>
using namespace std;

struct studentStruct
{
    string name;
    int batch;
    string studentId;
    char section;
    bool enrollment;
};

int menu();
studentStruct inputStudent();
void outputStudent(vector<vector<studentStruct>> &stud);

int main()
{
    system("cls");
    vector<vector<studentStruct>> stud;
    bool run = true;
    do
    {
        int userChoice = menu();
        switch (userChoice)
        {
        case 1:
        {
            studentStruct input = inputStudent();
            for (int i = 0; i < 5; i++)
            {
                stud.push_back(vector<studentStruct>());
                stud[i].push_back(input);
            }
        }
        break;
        case 2:
        {
            if (stud.empty())
            {
                cout << "First input details and then you can output!\n\n";
            }
            else
            {
                outputStudent(stud);
            }
        }
        break;
        case 3:
            run = false;
            break;
        default:
            cout << "Invalid input!";
            break;
        }
    } while (run);

    return 0;
}

int menu()
{
    int choice;
    cout << "1.Enter Student details\n2.Print Student details\n3.Exit\n";
    cin >> choice;
    return choice;
}

studentStruct inputStudent()
{
    studentStruct stud;
    cout << "Enter student name: \n";
    cin >> stud.name;
    cout << "Enter student ID: \n";
    cin >> stud.studentId;
    cout << "Enter student section: \n";
    cin >> stud.section;
    cout << "Enter student batch: \n";
    cin >> stud.batch;
    cout << "Student Enrollment 1 for Yes 0 for NO: \n";
    cin >> stud.enrollment;
    return stud;
}

void outputStudent(vector<vector<studentStruct>> &stud)
{
    for (int i = 0; i < stud.size(); i++)
    {
        for (int j = 0; i < stud[i].size(); j++)
        {
            studentStruct s = stud[i][j];
            cout << "Student name is: \n"
                 << s.name << endl;
            cout << "Student Id is: \n"
                 << s.studentId << endl;
            cout << "Student section is: \n"
                 << s.section << endl;
            cout << "Student batch is: \n"
                 << s.batch << endl;
            cout << "Student enrolled (1-yes and 0-No): \n"
                 << s.enrollment << endl;
        }
    }
}