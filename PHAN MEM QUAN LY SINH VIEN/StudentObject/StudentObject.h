#ifndef StudentProject_StudentObject_H_
#define StudentProject_StudentObject_H_

#include <iostream>
#include <string>

using namespace std;

class StudentObject {
    protected:
        int ID;
    public:
        int GetID();
        void SetID(int);
        virtual string ToString() = 0;
};
#endif //StudentProject_StudentObject_H_