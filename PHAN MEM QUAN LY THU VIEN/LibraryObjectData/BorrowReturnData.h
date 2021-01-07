#ifndef LibraryProject_BorrowReturnData_H_
#define LibraryProject_BorrowReturnData_H_

#include "LibraryObjectData.h"

class BorrowReturnData : public LibraryObjectData {
    private:
        vector<BorrowReturn> _dataBorrowReturn;
        int _maxID;
    public:
        BorrowReturnData();
        vector<BorrowReturn> GetDataBorrowReturn();
        LibraryObject* GetPointer(int);
        int GetMaxID();
        int GetSize();
        int Create(BorrowReturn&);
        void Read(string);
        void Update(int&, BorrowReturn&);
        void Delete(int&);
        void ExportToFile(string);
};
#endif  //LibraryProject_BorrowReturnData_H_