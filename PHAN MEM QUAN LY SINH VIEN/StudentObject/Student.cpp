#include "Student.h"
Student::Student() {

}
Student::Student(string StudentNumber, string StudentName, string BirthDateStudent, string Sex) {
    _StudentNumber = StudentNumber;
    _StudentName = StudentName;
    _BirthDateStudent = BirthDateStudent;
    _Sex = Sex;   
}
string Student::GetStudentNumber() {
    return _StudentNumber;
}
string Student::GetStudentName() {
    return _StudentName;
}
string Student::GetBirthDateStudent() {
    return _BirthDateStudent;
}
string Student::GetSex() {
    return _Sex;
}       
string Student::ToString() {
    string s;
    s = "ID : " + to_string(ID) + "|";
    s += "StudentNumber : " + _StudentNumber + "|";
    s += "StudentName : " + _StudentName + "|";
    s += "BirthDateStudent : " + _BirthDateStudent + "|";
    s += "Sex : " + _Sex + "";
    return s;
}