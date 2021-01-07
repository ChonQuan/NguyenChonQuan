#ifndef StudentProject_StudentData_H_
#define StudentProject_StudentData_H_

#include "StudentObjectData.h"

class StudentData : public StudentObjectData {
    private:
        vector<Student> _dataStudent;
        int _maxID;
    public:
        StudentData();
        StudentObject* GetPointer(int);
        int GetSize();       
        void Create(Student&);
        void Update(int, Student&);
        void Delete(int);
        void Read(string);
        void ExportToFile(string);
};
#endif //StudentProject_StudentObject_H_