#ifndef StudentProject_UI_H_
#define StudentProject_UI_H_

#include <iostream>

#include "../StudentObject/StudentObject.h"
#include "../StudentDataAccess/StudentObjectData.h"
#include "../StudentDataAccess/StudentData.h"
#include "../StudentDataAccess/MarkData.h"
#include "../StudentDataAccess/MarkData.h"

using namespace std;
class UI { 
    private:
        StudentData studentdata;
        SubjectData subjectdata;
        MarkData markdata;
    public:
        void Display(StudentObjectData* );
        void LietKeDiemCao(int );
        void LietkeTuoi(int );
        void MenuStudent();
        void MenuSubject();
        void MenuMark();
};
#endif // StudentProject_UI_H_