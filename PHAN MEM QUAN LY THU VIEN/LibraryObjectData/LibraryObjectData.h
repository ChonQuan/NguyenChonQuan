#ifndef LibraryProject_LibraryObjectData_H_
#define LibraryProject_LibraryObjectData_H_

#include <iostream>
#include <string>
#include <vector>
#include <fstream>

#include "../LibraryObject/LibraryObject.h"
#include "../LibraryObject/Member.h"
#include "../LibraryObject/Book.h"
#include "../LibraryObject/BorrowReturn.h"

using namespace std;

class LibraryObjectData {
    public:
        virtual int GetSize() = 0;
        virtual LibraryObject* GetPointer(int) = 0;
};
#endif  //LibraryProject_LibraryObjectData_H_