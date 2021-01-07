#ifndef StudentProject_Student_H_
#define StudentProject_Student_H_

#include "StudentObject.h"

using namespace std;

class Student : public StudentObject {
    private:
        string _StudentNumber;
        string _StudentName;
        string _BirthDateStudent;
        string _Sex;
    public:
        Student();
        Student(string, string, string, string);
        string GetStudentNumber();
        string GetStudentName();
        string GetBirthDateStudent();
        string GetSex();       
        string ToString();
        friend istream& operator >> (istream&, Student&);
};
#endif //StudentProject_Student_H_