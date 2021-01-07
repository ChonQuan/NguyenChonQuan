#ifndef StudentProject_MarkData_H_
#define StudentProject_MarktData_H_

#include "StudentObjectData.h"

class MarkData : public StudentObjectData {
    private:
        vector<Mark> _dataMark;
        int _maxID;
    public:
        MarkData();
        StudentObject* GetPointer(int);
        int GetSize();       
        void Create(Mark&);
        void Update(int, Mark&);
        void Delete(int);
        void Read(string);
        void ExportToFile(string);
};
#endif //StudentProject_MarkObject_H_