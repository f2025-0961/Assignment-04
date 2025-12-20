#include <iostream>
#include <vector>
using namespace std;

struct student
{
    string studentName;
    int studentID;
};

struct course
{
    string courseName;
    int courseCode;
    vector<student> stud;
};

course inputCourse();
void displayCourse(vector<course> &totalCourses);
int main()
{
    system("cls");
    int num;
    vector<course> totalCourses;
    cout << "Enter number of courses: "
         << endl;
    cin >> num;
    for (int i = 0; i < num; i++)
    {
        course crs = inputCourse();
        totalCourses.push_back(crs);
    }
    cout << endl;
    displayCourse(totalCourses);
    cout << endl;

    return 0;
}

course inputCourse()
{
    course crs;
    int n;
    cout << "Enter course name: \n";
    cin >> crs.courseName;
    cout << "Enter course code: \n";
    cin >> crs.courseCode;
    cout << "Enter how many students are enrolled: \n";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        student stud;
        cout << "Enter student name: \n";
        cin >> stud.studentName;
        cout << "Enter student ID: \n";
        cin >> stud.studentID;
        crs.stud.push_back(stud);
    }

    return crs;
}

void displayCourse(vector<course> &totalCourses)
{
    for (int i = 0; i < totalCourses.size(); i++)
    {
        course crs = totalCourses[i];
        cout << "Course Name: \n"
             << crs.courseName << endl;
        cout << "Course Code: \n"
             << crs.courseCode << endl;
        cout << "Student(s) Enrolled in this are: \n";
        for (int j = 0; j < crs.stud.size(); j++)
        {
            student std = crs.stud[j];
            cout << "Student name: \n"
                 << std.studentName << endl;
            cout << "Student ID: \n"
                 << std.studentID << endl;
        }
    }
}
