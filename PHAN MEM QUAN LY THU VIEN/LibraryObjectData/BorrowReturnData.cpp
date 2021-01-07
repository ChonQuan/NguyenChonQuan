#include "BorrowReturnData.h"

BorrowReturnData::BorrowReturnData() {
    _maxID = 0;
    _dataBorrowReturn.resize(0);
}
vector<BorrowReturn> BorrowReturnData::GetDataBorrowReturn() {
    return _dataBorrowReturn;
}
LibraryObject* BorrowReturnData::GetPointer(int i) {
    return &_dataBorrowReturn[i];
}
int BorrowReturnData::GetMaxID() {
    return _maxID;
}
int BorrowReturnData::GetSize() {
    return _dataBorrowReturn.size();
}
int BorrowReturnData::Create(BorrowReturn& BorrowReturn) {
    _maxID++;
    BorrowReturn.SetID(_maxID);
    _dataBorrowReturn.push_back(BorrowReturn);
    return _maxID;
}
void BorrowReturnData::Read(string filename) {
    _maxID = 0;
    _dataBorrowReturn.resize(0);
    ifstream infile(filename);
    int datanumber;
    infile >> datanumber;
    int id;
    int BorrowReturnID;
    int MemberID;
    int BookID;
    string Date;
    int borrowreturncheck;
    for(int i = 0; i < datanumber; i++ ) {
        infile >> id;
        infile >> BorrowReturnID;
        infile >> MemberID;
        infile >> BookID;
        infile.ignore();
        getline(infile,Date);
        infile >> borrowreturncheck;
        BorrowReturn borrowreturn(BorrowReturnID, MemberID, BookID, Date, borrowreturncheck);
        borrowreturn.SetID(id);
        _dataBorrowReturn.push_back(borrowreturn);
    }
    infile.close();
}
void BorrowReturnData::Update(int& i, BorrowReturn& BorrowReturn) {
    BorrowReturn.SetID(i);
    _dataBorrowReturn[i-1] = BorrowReturn;
}
void BorrowReturnData::Delete(int& i) {
    _dataBorrowReturn.erase(_dataBorrowReturn.begin()+i-1);
    for(int j = i-1; j < _maxID; j++ ) {
        _dataBorrowReturn[j].SetID(j+1);
    }
}
void BorrowReturnData::ExportToFile(string filename) {
    ofstream outfile(filename);
    outfile << _maxID;
    for(BorrowReturn BorrowReturn:_dataBorrowReturn) {
        outfile << BorrowReturn.GetID() << endl;
        outfile << BorrowReturn.GetBorrowReturnID() << endl;
        outfile << BorrowReturn.GetMemberID() << endl;
        outfile << BorrowReturn.GetBookID() << endl;
        outfile << BorrowReturn.GetDate() << endl;
        outfile << BorrowReturn.GetBorrowReturn() << endl;
    }
    outfile.close();    
}