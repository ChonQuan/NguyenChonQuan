#include "StudentData.h"

StudentData::StudentData() {
    _dataStudent.resize(0);
}
StudentObject* StudentData::GetPointer(int i) {
    return &_dataStudent[i];
}
int StudentData::GetSize() {
    return _dataStudent.size();
}     
void StudentData::Create(Student& student) {
    student.SetID(_dataStudent.size());
    _dataStudent.push_back(student);
}
void StudentData::Update(int id, Student& student) {
    student.SetID(id);
    _dataStudent[id-1] = student;
}
void StudentData::Delete(int id) {
    _dataStudent.erase(_dataStudent.begin()+id-1);
    for(int i = id-1; i < _dataStudent.size(); i++) {
        _dataStudent[i].SetID(i+1);
    }
}
void StudentData::Read(string filename) {
    _dataStudent.resize(0);
    ifstream infile(filename);
    int elementnumber;
    infile >> elementnumber;
    int ID;
    string StudentNumber;
    string StudentName;
    string BirthDateStudent;
    string Sex;
    for (int i = 0; i < elementnumber; i++) {
        infile >> ID;
        infile.ignore();
        getline(infile,StudentNumber);
        getline(infile,StudentName);
        getline(infile,BirthDateStudent);
        getline(infile,Sex);
        Student student(StudentNumber, StudentName, BirthDateStudent,Sex);
        student.SetID(ID);
        _dataStudent.push_back(student);
    }
    infile.close();
}
void StudentData::ExportToFile(string filename) {
    ofstream outfile(filename);
    outfile << _dataStudent.size() << endl;
    for(Student student:_dataStudent) {
        outfile << student.GetID() << endl;
        outfile << student.GetStudentNumber() << endl;
        outfile << student.GetStudentName() << endl;
        outfile << student.GetBirthDateStudent() << endl;
        outfile << student.GetSex() << endl;
    }
    outfile.close();
}