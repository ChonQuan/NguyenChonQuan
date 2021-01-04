#ifndef StudentProject_MarkData_H_
#define StudentProject_MarkData_H_

#include <iostream>
#include <string>
#include <vector>
#include <fstream>

#include "StudentObjectData.h"
#include "../StudentObject/Mark.h"

using namespace std;

class MarkData : public StudentObjectData {
    private:
        vector<Mark> _MarkArr;
        int _maxID;
    public:
        vector<Mark> GetDataMark();
        int PushBack(Mark );
        void Edit(Mark ,int );
        void Delete(int );
        void ReadToFile(string );
        void ExportToFile(string );
        StudentObject* GetPointer(int );
        int GetSize();
};
#endif //StudentProject_MarkData_H_