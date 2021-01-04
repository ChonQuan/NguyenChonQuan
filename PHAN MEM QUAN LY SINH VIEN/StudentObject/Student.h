#ifndef StudentProject_Student_H_
#define StudentProject_Student_H_

#include <iostream>
#include <string>

#include "StudentObject.h"

using namespace std;

class Student : public StudentObject {
    private:
        int ID;
        string StudentNumber;
        string StudentName;
        string BirthDate;
        char Sex;
    public:
        Student();
        Student(string, string, string, char);
        int GetID();
        string GetStudentNumber();
        string GetStudentName();
        string GetBirthDate();
        char GetSex();

        void SetID(int );
        string To_String();
};
#endif //StudentProject_Student_H_