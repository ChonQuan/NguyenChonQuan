#ifndef StudentProject_StudentObjectData_H_
#define StudentProject_StudentObjectData_H_

#include <vector>
#include <fstream>

#include "../StudentObject/StudentObject.h"
#include "../StudentObject/Student.h"
#include "../StudentObject/Subject.h"
#include "../StudentObject/Mark.h"


class StudentObjectData {
    public:
        virtual StudentObject* GetPointer(int) = 0;
        virtual int GetSize() = 0;
};
#endif //StudentProject_StudentObject_H_