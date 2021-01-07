#include "MemberData.h"

MemberData::MemberData() {
    _maxID = 0;
    _dataMember.resize(0);
}
vector<Member> MemberData::GetDataMember() {
    return _dataMember;
}
LibraryObject* MemberData::GetPointer(int i) {
    return &_dataMember[i];
}
int MemberData::GetMaxID() {
    return _maxID;
}
int MemberData::GetSize() {
    return _dataMember.size();
}
int MemberData::Create(Member& member) {
    _maxID++;
    member.SetID(_maxID);
    _dataMember.push_back(member);
    return _maxID;
}
void MemberData::Read(string filename) {
    _maxID = 0;
    _dataMember.resize(0);
    ifstream infile(filename);
    int datanumber;
    infile >> datanumber;
    int id;
    int MemberID;
    string NameMember;
    for(int i = 0; i < datanumber; i++ ) {
        infile >> id;
        infile >> MemberID;
        infile.ignore();
        getline(infile, NameMember);
        Member member(MemberID, NameMember);
        member.SetID(id);
        _dataMember.push_back(member);
    }
    infile.close();
}
void MemberData::Update(int& i, Member& member) {
    member.SetID(i);
    _dataMember[i-1] = member;
}
void MemberData::Delete(int& i) {
    _dataMember.erase(_dataMember.begin()+i-1);
    for(int j = i-1; j < _maxID; j++ ) {
        _dataMember[j].SetID(j+1);
    }
}
void MemberData::ExportToFile(string filename) {
    ofstream outfile(filename);
    outfile << _maxID;
    for(Member member:_dataMember) {
        outfile << member.GetID() << endl;
        outfile << member.GetMemberID() << endl;
        outfile << member.GetNameMember() << endl;
    }
    outfile.close();    
}