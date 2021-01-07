#ifndef LibraryProject_BorrowReturn_H_
#define LibraryProject_BorrowReturn_H_

#include <iostream>
#include <string>

#include "LibraryObject.h"

using namespace std;

class BorrowReturn : public LibraryObject {
    private:
        int _BorrowReturnID;
        int _MemberID;
        int _BookID;
        string _Date;
        int _BorrowReturn;
    public:
        BorrowReturn();
        BorrowReturn(int, int, int, string, int);
        int GetBorrowReturnID();
        int GetMemberID();
        int GetBookID();
        string GetDate();
        float GetBorrowReturn();
        string ToString();     
        friend istream& operator >> (istream&, BorrowReturn& );
};
#endif  //LibraryProject_BorrowReturn_H_