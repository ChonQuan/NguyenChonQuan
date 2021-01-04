#ifndef StudentProject_SubjectData_H_
#define StudentProject_SubjectData_H_

#include <iostream>
#include <string>
#include <vector>
#include <fstream>

#include "StudentObjectData.h"
#include "../StudentObject/Subject.h"

using namespace std;

class SubjectData : public StudentObjectData {
    private:
        vector<Subject> _SubjectArr;
        int _maxID;
    public:
        vector<Subject> GetDataSubject();
        int PushBack(Subject );
        void Edit(Subject ,int );
        void Delete(int );
        void ReadToFile(string );
        void ExportToFile(string );
        StudentObject* GetPointer(int );
        int GetSize();
};
#endif //StudentProject_SubjectData_H_