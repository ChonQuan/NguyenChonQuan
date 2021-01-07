#ifndef LibraryProject_LibraryObject_H_
#define LibraryProject_LibraryObject_H_

#include <iostream>
#include <string>

using namespace std;

class LibraryObject {
    protected:
        int ID;
    public:
        int GetID();
        void SetID(int);
        virtual string ToString() = 0;
};
#endif  //LibraryProject_LibraryObject_H_