#include "Mark.h"

Mark::Mark() {
}

Mark::Mark(string studentnumber, string subjectnumber, int marknumber) {
    StudentNumber = studentnumber;
    SubjectNumber = subjectnumber;
    MarkNumber = marknumber;
}
int Mark::GetID() {
    return ID;
}
string Mark::GetStudentNumber() {
    return StudentNumber;
}
string Mark::GetSubjectNumber() {
    return SubjectNumber;
}
int Mark::GetMarkNumber() {
    return MarkNumber;
}
void Mark::SetID(int ID) {
    this->ID = ID;
}
string Mark::To_String() {
    string s;
    s = "StudentNumber : " + StudentNumber + " ";
    s = "SubjectNumber : " + SubjectNumber + " ";
    s = "MarkNumber : " + to_string(MarkNumber);
    return s;
}