#include "UI/UI.h"
// void Display(LibraryObjectData* libraryobjectdata) {
//     for(int i = 0; i<libraryobjectdata->GetSize();i++){
//         LibraryObject* libraryobject = libraryobjectdata->GetPointer(i);
//         cout << libraryobject->ToString() << endl;
//     }   
// }
int main() {
    // Member member(1,"adsf");
    // MemberData memmberdata;
    // memmberdata.Create(member);
    // Display(&memmberdata);
    UI ui;
    ui.QuestionMenu();
    return 0;
}
