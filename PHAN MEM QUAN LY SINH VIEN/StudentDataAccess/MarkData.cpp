#include "MarkData.h"

vector<Mark> MarkData::GetDataMark() {
    return _MarkArr;
}
int MarkData::PushBack(Mark Mark) {
    _MarkArr.push_back(Mark);
    _maxID = _MarkArr.size();
    _MarkArr.back().SetID(_maxID);
    return _maxID;
}
void MarkData::Edit(Mark Mark, int ID) {
    _MarkArr[ID-1] = Mark;
}
void MarkData::Delete(int ID) {
    _MarkArr.erase(_MarkArr.begin()+ID-1);
    for (int i = ID-1; i<_MarkArr.size(); i++) {
        _MarkArr[i].SetID(i+1);
    }
}
void MarkData::ReadToFile(string filename) {
    _maxID = 0;
    _MarkArr.resize(0);
    ifstream infile(filename);
    int numberofMark;
    infile >> numberofMark;
    int ID;
    string studentnumber;
    string subjectnumber;
    int markstudent;
    for (int i = 0; i<numberofMark; i++) {
        infile >> ID;
        infile.ignore();
        getline(infile,studentnumber);
        getline(infile,subjectnumber);
        infile >> markstudent;
        Mark mark(studentnumber, subjectnumber, markstudent);
        mark.SetID(ID);
        _MarkArr.push_back(mark);
    }
    _maxID = numberofMark;
    infile.close();
}
void MarkData::ExportToFile(string filename) {
    ofstream outfile(filename);
    outfile << _maxID << endl;
    for (int i = 0; i<_maxID; i++) {
        outfile << _MarkArr[i].GetID() << endl;
        outfile << _MarkArr[i].GetStudentNumber() << endl;
        outfile << _MarkArr[i].GetSubjectNumber() << endl;
        outfile << _MarkArr[i].GetMarkNumber() << endl;    
    }
    outfile.close();
}
StudentObject* MarkData::GetPointer(int i) {
    return &_MarkArr[i];
}
int MarkData::GetSize() {
    return _MarkArr.size();
}