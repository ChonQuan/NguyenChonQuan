#include <iostream>

#include "../StudentObject/Student.h"
#include "../StudentDataAccess/StudentData.h"

int main() {
    StudentData studentdata;
    Student student1("SV0001","Do Thi Ha","1999-12-22",'F');
    Student student2("SV0002","Le Binh Minh","2000-08-19",'M');
    Student student3("SV0003","Nguyen Minh Canh","1997-04-09",'M');
    Student student4("SV0004","Le Huu Long","2000-01-02",'M');
    cout << student1.GetBirthDate() << endl;

    cout << studentdata.PushBack(student1);
    cout << studentdata.PushBack(student2);
    cout << studentdata.PushBack(student3);
    cout << studentdata.PushBack(student4);
    
    studentdata.ExportToFile("StudentData.txt");
    return 0;
}