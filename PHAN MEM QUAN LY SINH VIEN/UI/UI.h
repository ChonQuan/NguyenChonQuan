#ifndef StudentProject_UI_H_
#define StudentProject_UI_H_

#include <direct.h>

#include "../StudentObjectData/StudentObjectData.h"
#include "../StudentObjectData/StudentData.h"
#include "../StudentObjectData/SubjectData.h"
#include "../StudentObjectData/MarkData.h"
#include "Input.h"

class UI {
    private:
        StudentData _studentdata;
        SubjectData _subjectdata;
        MarkData _markdata;
    public:
        void Display(StudentObjectData*);
        void SaveFile(string);
        vector<string> GetBackUpName();
        void SaveFolderName(string);
        void RestoreFile(string);
        void QuestionMenu();
        void SheetMenu();
        void CRUDMenu(int);
};
#endif //StudentProject_UI_H_