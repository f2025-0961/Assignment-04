#include <iostream>
#include <vector>
using namespace std;

struct studentStruct
{
    string name;
    int id;
};

struct courseStruct
{
    string name;
    int code;
    vector<studentStruct> student;
};

courseStruct inputCourse();
void displayCourse(vector<courseStruct> &totalCourses);
int main()
{
    system("cls");
    int num;
    vector<courseStruct> totalCourses;
    cout << "Enter number of courses: "
         << endl;
    cin >> num;
    for (int i = 0; i < num; i++)
    {
        courseStruct crs = inputCourse();
        totalCourses.push_back(crs);
    }
    cout << endl;
    displayCourse(totalCourses);
    cout << endl;

    return 0;
}

courseStruct inputCourse()
{
    courseStruct crs;
    int n;
    cout << "Enter course name: \n";
    cin >> crs.name;
    cout << "Enter course code: \n";
    cin >> crs.code;
    cout << "Enter how many students are enrolled: \n";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        studentStruct stud;
        cout << "Enter student name: \n";
        cin >> stud.name;
        cout << "Enter student ID: \n";
        cin >> stud.id;
        crs.student.push_back(stud);
    }

    return crs;
}

void displayCourse(vector<courseStruct> &totalCourses)
{
    for (int i = 0; i < totalCourses.size(); i++)
    {
        courseStruct crs = totalCourses[i];
        cout << "Course Name: \n"
             << crs.name << endl;
        cout << "Course Code: \n"
             << crs.code << endl;
        cout << "Student(s) Enrolled in this are: \n";
        for (int j = 0; j < crs.student.size(); j++)
        {
            studentStruct std = crs.student[j];
            cout << "Student name: \n"
                 << std.name << endl;
            cout << "Student ID: \n"
                 << std.id << endl;
        }
    }
}
