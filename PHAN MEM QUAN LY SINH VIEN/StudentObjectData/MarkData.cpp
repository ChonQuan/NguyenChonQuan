#include "MarkData.h"

MarkData::MarkData() {
    _dataMark.resize(0);
}
StudentObject* MarkData::GetPointer(int i) {
    return &_dataMark[i];
}
int MarkData::GetSize() {
    return _dataMark.size();
}     
void MarkData::Create(Mark& mark) {
    mark.SetID(_dataMark.size());
    _dataMark.push_back(mark);
}
void MarkData::Update(int id, Mark& Mark) {
    Mark.SetID(id);
    _dataMark[id-1] = Mark;
}
void MarkData::Delete(int id) {
    _dataMark.erase(_dataMark.begin()+id-1);
    for(int i = id-1; i < _dataMark.size(); i++) {
        _dataMark[i].SetID(i+1);
    }
}
void MarkData::Read(string filename) {
    _dataMark.resize(0);
    ifstream infile(filename);
    int elementnumber;
    infile >> elementnumber;
    int ID;
    string StudentNumber;
    string SubjectNumber;
    int Score;
    for (int i = 0; i < elementnumber; i++) {
        infile >> ID;
        infile.ignore();
        getline(infile,StudentNumber);
        getline(infile,SubjectNumber);
        infile >> Score; infile.ignore();
        Mark mark(StudentNumber, SubjectNumber, Score);
        mark.SetID(ID);
        _dataMark.push_back(mark);
    }
    infile.close();
}
void MarkData::ExportToFile(string filename) {
    ofstream outfile(filename);
    outfile << _dataMark.size() << endl;
    for(Mark mark:_dataMark) {
        outfile << mark.GetID() << endl;
        outfile << mark.GetStudentNumber() << endl;
        outfile << mark.GetSubjectNumber() << endl;
        outfile << mark.GetScore() << endl;
    }
    outfile.close();
}