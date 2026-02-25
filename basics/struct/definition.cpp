#include <iostream>
using namespace std;

/*
 A struct is a structure that group related
 variables under one name.
 You can provide a default value.
 */

struct Student{
    string name;
    double gpa;
    bool enrolled;
};

int main () {
    Student student1;
    student1.name = "Jane";
    student1.gpa = 3.2;
    student1.enrolled = true;

    Student student2;
    student2.name = "Brian";
    student2.gpa = 4.0;
    student2.enrolled = true;

    cout << "Name: " << student1.name << '\n';
    cout << "GPA: " << student1.gpa << '\n';
    cout << "IsEnrolled: " << student1.enrolled << '\n';

    cout << "Name: " << student2.name << '\n';
    cout << "GPA: " << student2.gpa << '\n';
    cout << "IsEnrolled: " << student2.enrolled << '\n';

    return 0;
}
