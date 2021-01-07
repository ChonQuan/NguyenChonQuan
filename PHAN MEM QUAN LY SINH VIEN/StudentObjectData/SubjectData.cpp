#include "SubjectData.h"

SubjectData::SubjectData() {
    _maxID = 0;
    _dataSubject.resize(0);
}
StudentObject* SubjectData::GetPointer(int i) {
    return &_dataSubject[i];
}
int SubjectData::GetSize() {
    return _dataSubject.size();
}     
void SubjectData::Create(Subject& Subject) {
    Subject.SetID(_dataSubject.size());
    _dataSubject.push_back(Subject);
}
void SubjectData::Update(int id, Subject& Subject) {
    Subject.SetID(id);
    _dataSubject[id-1] = Subject;
}
void SubjectData::Delete(int id) {
    _dataSubject.erase(_dataSubject.begin()+id-1);
    for(int i = id-1; i < _maxID; i++) {
        _dataSubject[i].SetID(i+1);
    }
}
void SubjectData::Read(string filename) {
    _maxID = 0;
    _dataSubject.resize(0);
    ifstream infile(filename);
    int elementnumber;
    infile >> elementnumber;
    int ID;
    string SubjectNumber;
    string SubjectName;
    int CreditNumber;
    for (int i = 0; i < elementnumber; i++) {
        infile >> ID;
        infile.ignore();
        getline(infile,SubjectNumber);
        getline(infile,SubjectName);
        infile >> CreditNumber;
        Subject subject(SubjectNumber, SubjectName, CreditNumber);
        subject.SetID(ID);
        _dataSubject.push_back(subject);
    }
    infile.close();
}
void SubjectData::ExportToFile(string filename) {
    ofstream outfile(filename);
    outfile << _dataSubject.size() << endl;
    for(Subject subject:_dataSubject) {
        outfile << subject.GetID() << endl;
        outfile << subject.GetSubjectNumber() << endl;
        outfile << subject.GetSubjectName() << endl;
        outfile << subject.GetCreditNumber() << endl;
    }
    outfile.close();
}