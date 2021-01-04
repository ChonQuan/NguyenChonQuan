#ifndef StudentProject_StudentData_H_
#define StudentProject_StudentData_H_

#include <iostream>
#include <string>
#include <vector>
#include <fstream>

#include "StudentObjectData.h"
#include "../StudentObject/Student.h"

using namespace std;

class StudentData : public StudentObjectData {
    private:
        vector<Student> _studentArr;
        int _maxID;
    public:
        vector<Student> GetDataStudent();
        int PushBack(Student );
        void Edit(Student ,int );
        void Delete(int );
        void ReadToFile(string );
        void ExportToFile(string );
        StudentObject* GetPointer(int );
        int GetSize();
};
#endif //StudentProject_StudentData_H_