#ifndef StudentProject_StudentObjectData_H_
#define StudentProject_StudentObjectData_H_

#include <iostream>
#include "../StudentObject/StudentObject.h"

using namespace std;
class StudentObjectData { 
    public:
        virtual void Delete(int ) = 0;
        virtual void ReadToFile(string ) = 0;
        virtual void ExportToFile(string ) = 0;
        virtual StudentObject* GetPointer(int ) = 0;
        virtual int GetSize() = 0;
};
#endif // StudentProject_StudentObjectData_H_