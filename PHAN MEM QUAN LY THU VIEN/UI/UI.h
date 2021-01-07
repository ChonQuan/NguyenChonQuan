#ifndef LibraryProject_UI_H_
#define LibraryProject_UI_H_

#include <direct.h>

#include "../LibraryObjectData/LibraryObjectData.h"
#include "../LibraryObjectData/MemberData.h"
#include "../LibraryObjectData/BookData.h"
#include "../LibraryObjectData/BorrowReturnData.h"
#include "Input.h"

class UI {
    private:
        MemberData _memberdata;
        BookData _bookdata;
        BorrowReturnData _borrowreturndata;
    public:
        void Display(LibraryObjectData*);
        void SaveFile(string);
        vector<string> GetBackUpName();
        void SaveFileName(string);
        void RestoreData(string);
        void QuestionMenu();
        void SheetMenu();
        void CRUDMenu(int&);
};
#endif //LibraryProject_UI_H_