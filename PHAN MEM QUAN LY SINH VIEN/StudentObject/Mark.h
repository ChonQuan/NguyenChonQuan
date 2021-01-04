#ifndef StudentProject_Mark_H_
#define StudentProject_Mark_H_

#include <iostream>
#include <string>

#include "StudentObject.h"

using namespace std;

class Mark : public StudentObject {
    private:
        int ID;
        string StudentNumber;
        string SubjectNumber;
        int MarkNumber;
    public:
        Mark();
        Mark(string, string, int);
        int GetID();
        string GetStudentNumber();
        string GetSubjectNumber();
        int GetMarkNumber();

        void SetID(int );
        string To_String();
};
#endif //StudentProject_Mark_H_