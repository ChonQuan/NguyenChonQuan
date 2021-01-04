#include "UI.h"

void UI::Display(StudentObjectData* studentobjectdata) {
    cout << endl;
    for (int i = 0; i < studentobjectdata->GetSize(); i++) {
        StudentObject* studentobject = studentobjectdata->GetPointer(i);
        cout << studentobject->To_String() << endl ;
    }
    cout << endl << endl;
}
void LietKeDiemCao(int N,MarkData& markdata) {
        vector<Mark> markdatatemp = markdata.GetDataMark();
        for (int i = 0; i<markdata.GetSize()-1;i++) {
                for (int j = i + 1 ; j < markdata.GetSize(); j++) {
                        if(markdatatemp[i].GetMarkNumber() > markdatatemp[j].GetMarkNumber()) {
                                Mark marktemp = markdatatemp[i];
                                markdatatemp[i] = markdatatemp[j];
                                markdatatemp[j] = marktemp;
                        }
                }
        }
        if ( N > markdatatemp.size()) N = markdatatemp.size();
        for (int i = markdatatemp.size()-1;i>(markdatatemp.size()-1-N);i--) {
                cout << markdatatemp[i].GetStudentNumber() << " " << markdatatemp[i].GetSubjectNumber() << " " << markdatatemp[i].GetMarkNumber() << endl;
        }
}
void UI::LietkeTuoi(int ) {
        
}
void UI::MenuStudent() {

}
void UI::MenuSubject() {

}
void UI::MenuMark() {

}