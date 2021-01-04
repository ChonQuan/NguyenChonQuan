#include "StudentData.h"

vector<Student> StudentData::GetDataStudent() {
    return _studentArr;
}
int StudentData::PushBack(Student student) {
    _studentArr.push_back(student);
    _maxID = _studentArr.size();
    _studentArr.back().SetID(_maxID);
    return _maxID;
}
void StudentData::Edit(Student student, int ID) {
    _studentArr[ID-1] = student;
}
void StudentData::Delete(int ID) {
    _studentArr.erase(_studentArr.begin()+ID-1);
    for (int i = ID-1; i<_studentArr.size(); i++) {
        _studentArr[i].SetID(i+1);
    }
}
void StudentData::ReadToFile(string filename) {
    _maxID = 0;
    _studentArr.resize(0);
    ifstream infile(filename);
    int numberofstudent;
    infile >> numberofstudent;
    int ID;
    string studentnumber;
    string studentname;
    string birthdate;
    char sex;
    for (int i = 0; i<numberofstudent; i++) {
        infile >> ID;
        infile >> studentnumber;
        infile.ignore();
        getline(infile,studentname);
        getline(infile,birthdate);
        infile >> sex;
        Student student(studentnumber, studentname, birthdate, sex);
        student.SetID(ID);
        _studentArr.push_back(student);
    }
    _maxID = numberofstudent;
    infile.close();
}
void StudentData::ExportToFile(string filename) {
    ofstream outfile(filename);
    outfile << _maxID << endl;
    for (int i = 0; i<_maxID; i++) {
        outfile << _studentArr[i].GetID() << endl;
        outfile << _studentArr[i].GetStudentNumber() << endl;
        outfile << _studentArr[i].GetStudentName() << endl;
        outfile << _studentArr[i].GetBirthDate() << endl;
        outfile << _studentArr[i].GetSex() << endl;
    }
    outfile.close();
}
StudentObject* StudentData::GetPointer(int i) {
    return &(_studentArr[i]);
}
int StudentData::GetSize() {
    return _studentArr.size();
}