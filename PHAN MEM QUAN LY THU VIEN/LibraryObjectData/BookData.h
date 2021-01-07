#ifndef LibraryProject_BookData_H_
#define LibraryProject_BookData_H_

#include "LibraryObjectData.h"

class BookData : public LibraryObjectData {
    private:
        vector<Book> _dataBook;
        int _maxID;
    public:
        BookData();
        vector<Book> GetDataBook();
        LibraryObject* GetPointer(int);
        int GetMaxID();
        int GetSize();
        int Create(Book&);
        void Read(string);
        void Update(int&, Book&);
        void Delete(int&);
        void ExportToFile(string);
};
#endif  //LibraryProject_BookData_H_