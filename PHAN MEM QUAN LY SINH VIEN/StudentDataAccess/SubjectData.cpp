#include "SubjectData.h"

vector<Subject> SubjectData::GetDataSubject() {
    return _SubjectArr;
}
int SubjectData::PushBack(Subject Subject) {
    _SubjectArr.push_back(Subject);
    _maxID = _SubjectArr.size();
    _SubjectArr.back().SetID(_maxID);
    return _maxID;
}
void SubjectData::Edit(Subject Subject, int ID) {
    _SubjectArr[ID-1] = Subject;
}
void SubjectData::Delete(int ID) {
    _SubjectArr.erase(_SubjectArr.begin()+ID-1);
    for (int i = ID-1; i<_SubjectArr.size(); i++) {
        _SubjectArr[i].SetID(i+1);
    }
}
void SubjectData::ReadToFile(string filename) {
    _maxID = 0;
    _SubjectArr.resize(0);
    ifstream infile(filename);
    int numberofSubject;
    infile >> numberofSubject;
    int ID;
    string subjectnumber;
    string subjectname;
    int tinchi;
    for (int i = 0; i<numberofSubject; i++) {
        infile >> ID;
        infile.ignore();
        getline(infile,subjectnumber);
        getline(infile,subjectname);
        infile >> tinchi;
        Subject Subject(subjectnumber, subjectname, tinchi);
        Subject.SetID(ID);
        _SubjectArr.push_back(Subject);
    }
    _maxID = numberofSubject;
    infile.close();
}
void SubjectData::ExportToFile(string filename) {
    ofstream outfile(filename);
    outfile << _maxID << endl;
    for (int i = 0; i<_maxID; i++) {
        outfile << _SubjectArr[i].GetID() << endl;
        outfile << _SubjectArr[i].GetSubjectNumber() << endl;
        outfile << _SubjectArr[i].GetSubjectName() << endl;
        outfile << _SubjectArr[i].GetTinChi() << endl;    
    }
    outfile.close();
}
StudentObject* SubjectData::GetPointer(int i) {
    return &_SubjectArr[i];
}
int SubjectData::GetSize() {
    return _SubjectArr.size();
}