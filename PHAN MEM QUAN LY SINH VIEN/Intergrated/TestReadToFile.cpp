#include <iostream>

#include "../StudentObject/Student.h"
#include "../StudentDataAccess/StudentData.h"

int main() {
    StudentData studentdata;  
    studentdata.ReadToFile("StudentData.txt");
    for (Student student:studentdata.GetDataStudent()) {
        cout << student.GetID() << " " << student.GetStudentNumber() << " " << student.GetStudentName() << " " << student.GetSex() << endl;
    }
    return 0;
}