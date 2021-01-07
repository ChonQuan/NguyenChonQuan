#include "Subject.h"

Subject::Subject() {

}
Subject::Subject(string SubjectNumber, string SubjectName, int CreditNumber) {
    _SubjectNumber = SubjectNumber;
    _SubjectName = SubjectName;
    _CreditNumber = CreditNumber;    
}
string Subject::GetSubjectNumber() {
    return _SubjectNumber;
}
string Subject::GetSubjectName() {
    return _SubjectName;
}
int Subject::GetCreditNumber() {
    return _CreditNumber;
}  
string Subject::ToString() {
    string s;
    s = "ID : " + to_string(ID) + "|";
    s += "SubjectNumber : " + _SubjectNumber + "|";
    s += "SubjectName : " + _SubjectName + "|";
    s += "CreditNumber : " + to_string(_CreditNumber) + "";
    return s;
}