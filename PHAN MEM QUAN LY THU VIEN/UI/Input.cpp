#include "Input.h"

istream& operator >> (istream& is, Member& member) {
    cout << "MEMBER ID : " ; is >> member._MemberID; is.ignore();
    cout << "MEMBER NAME : " ; getline(is,member._NameMember);
    return is;
}
istream& operator >> (istream& is, Book& book) {
    cout << "BOOK ID : " ; is >> book._BookID;is.ignore();
    cout << "BOOK NAME : " ; getline(is,book._NameBook);
    cout << "BOOK PRICE : "; is >> book._BookPrice;
    return is;
}
istream& operator >> (istream& is, BorrowReturn& borrowreturn) {
    cout << "BorrowReturnID : " ; is >> borrowreturn._BorrowReturnID;is.ignore();
    cout << "MemberID : " ; is >> borrowreturn._MemberID;is.ignore();
    cout << "BookID : " ; is >> borrowreturn._BookID;is.ignore();
    cout << "Date : " ; getline(is,borrowreturn._Date);
    cout << "BorrowReturn : "; is >> borrowreturn._BorrowReturn;is.ignore();
    return is;
}