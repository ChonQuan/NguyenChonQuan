#include "BorrowReturn.h"

BorrowReturn::BorrowReturn() {

}
BorrowReturn::BorrowReturn(int BorrowReturnID, int MemberID, int BookID, string Date, int BorrowReturn) {
    _BorrowReturnID = BorrowReturnID;
    _MemberID = MemberID;
    _BookID = BookID;
    _Date = Date;
    _BorrowReturn = BorrowReturn;
}
int BorrowReturn::GetBorrowReturnID() {
    return _BorrowReturnID;
}
int BorrowReturn::GetMemberID() {
    return _MemberID;
}
int BorrowReturn::GetBookID() {
    return _BookID;
}
string BorrowReturn::GetDate() {
    return _Date;
}
float BorrowReturn::GetBorrowReturn() {
    return _BorrowReturn;
}
string BorrowReturn::ToString() {
    string s;
    s = "ID : " + to_string(ID) + "|";
    s += "BorrowReturnID : " + to_string(_BorrowReturnID) + "|";
    s += "MemberID : " + to_string(_MemberID) + "|";
    s += "BookID : " + to_string(_BookID) + "|";
    s += "Date : " + _Date + "|";
    s += "BorrowReturn : " + to_string(_BorrowReturn) + "|";
    return s;
}    