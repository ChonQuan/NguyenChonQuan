#include "Subject.h"

Subject::Subject() {
}
Subject::Subject(string subjectnumber, string subjectname, int tinchi) {
    SubjectNumber = subjectnumber;
    SubjectName = subjectname;
    TinChi = tinchi;
}
int Subject::GetID() {
    return ID;
}
string Subject::GetSubjectNumber() {
    return SubjectNumber;
}
string Subject::GetSubjectName() {
    return SubjectName;
}
int Subject::GetTinChi() {
    return TinChi;
}

void Subject::SetID(int ID) {
    this->ID = ID;
}
string Subject::To_String() {
    string s;
    s = "SubjectNumber : " + SubjectNumber + " ";
    s = "SubjectName : " + SubjectName + " ";
    s = "TinChi : " + to_string(TinChi);
    return s;
}