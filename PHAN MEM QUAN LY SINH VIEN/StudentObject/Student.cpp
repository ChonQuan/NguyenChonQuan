#include "Student.h"

Student::Student() {
}
Student::Student(string snum, string name, string birthdate, char sex) {
    StudentNumber = snum;
    StudentName = name;
    BirthDate = birthdate;
    Sex = sex;
}
int Student::GetID() {
    return ID;
}
string Student::GetStudentNumber() {
    return StudentNumber;
}
string Student::GetStudentName() {
    return StudentName;
}
string Student::GetBirthDate() {
    return BirthDate;
}
char Student::GetSex() {
    return Sex;
}

void Student::SetID(int ID) {
    this->ID = ID;
}
string Student::To_String() {
    string s;
    s = "StudentNumber : " + StudentNumber + " ";
    s = "StudentName : " + StudentName + " ";
    s = "BirthDate : " + BirthDate + " ";
    string temp = string(1,Sex);
    s = "Sex : " + temp;
    return s;
}