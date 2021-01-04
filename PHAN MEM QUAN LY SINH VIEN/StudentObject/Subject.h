#ifndef StudentProject_Subject_H_
#define StudentProject_Subject_H_

#include <iostream>
#include <string>

#include "StudentObject.h"

using namespace std;

class Subject : public StudentObject {
    private:
        int ID;
        string SubjectNumber;
        string SubjectName;
        int TinChi;
    public:
        Subject();
        Subject(string, string, int);
        int GetID();
        string GetSubjectNumber();
        string GetSubjectName();
        int GetTinChi();
        void SetID(int );

        string To_String();
};
#endif //SubjectProject_Student_H_