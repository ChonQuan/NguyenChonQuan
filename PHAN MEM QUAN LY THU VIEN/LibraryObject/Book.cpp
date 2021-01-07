#include "Book.h"

Book::Book() {

}
Book::Book(int BookID, string NameBook, float BookPrice) {
     _BookID = BookID;
    _NameBook = NameBook;
    _BookPrice = BookPrice;
}
int Book::GetBookID() {
    return _BookID;
}
string Book::GetNameBook() {
    return _NameBook;
}
float Book::GetBookPrice() {
    return _BookPrice;
}
string Book::ToString() {
    string s;
    s = "ID : " + to_string(ID) + "|";
    s += "BookID : " + to_string(_BookID) + "|";
    s += "NameBook : " + _NameBook + "|";
    s += "BookPrice : " + to_string(_BookPrice);
    return s;
}