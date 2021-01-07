#include "Mark.h"

Mark::Mark() {

}
Mark::Mark(string StudentNumber, string SubjectNumber, int Score) {
    _StudentNumber = StudentNumber;
    _SubjectNumber = SubjectNumber;
    _Score = Score; 
}
string Mark::GetStudentNumber() {
    return _StudentNumber;
}
string Mark::GetSubjectNumber() {
    return _SubjectNumber;
}
int Mark::GetScore() {
    return _Score;
}  
string Mark::ToString() {
    string s;
    s = "ID : " + to_string(ID) + "|";
    s += "StudentNumber : " + _SubjectNumber + "|";
    s += "SubjectNumber : " + _SubjectNumber + "|";
    s += "Score : " + to_string(_Score) + "";
    return s;
}