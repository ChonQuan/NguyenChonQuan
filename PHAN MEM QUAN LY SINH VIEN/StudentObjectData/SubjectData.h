#ifndef SubjectProject_SubjectData_H_
#define StudentProject_SubjectData_H_

#include "StudentObjectData.h"

class SubjectData : public StudentObjectData {
    private:
        vector<Subject> _dataSubject;
        int _maxID;
    public:
        SubjectData();
        StudentObject* GetPointer(int);
        int GetSize();       
        void Create(Subject&);
        void Update(int, Subject&);
        void Delete(int);
        void Read(string);
        void ExportToFile(string);
};
#endif //StudentProject_SubjectObject_H_