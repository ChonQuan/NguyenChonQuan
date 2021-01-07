#include "BookData.h"

BookData::BookData() {
    _maxID = 0;
    _dataBook.resize(0);
}
vector<Book> BookData::GetDataBook() {
    return _dataBook;
}
LibraryObject* BookData::GetPointer(int i) {
    return &_dataBook[i];
}
int BookData::GetMaxID() {
    return _maxID;
}
int BookData::GetSize() {
    return _dataBook.size();
}
int BookData::Create(Book& Book) {
    _maxID++;
    Book.SetID(_maxID);
    _dataBook.push_back(Book);
    return _maxID;
}
void BookData::Read(string filename) {
    _maxID = 0;
    _dataBook.resize(0);
    ifstream infile(filename);
    int datanumber;
    infile >> datanumber;
    int id;
    int BookID;
    string NameBook;
    float BookPrice;
    for(int i = 0; i < datanumber; i++ ) {
        infile >> id;
        infile >> BookID;
        infile.ignore();
        getline(infile,NameBook);
        infile >> BookPrice;
        Book Book(BookID, NameBook, BookPrice);
        Book.SetID(id);
        _dataBook.push_back(Book);
    }
    infile.close();
}
void BookData::Update(int& i, Book& Book) {
    Book.SetID(i);
    _dataBook[i-1] = Book;
}
void BookData::Delete(int& i) {
    _dataBook.erase(_dataBook.begin()+i-1);
    for(int j = i-1; j < _maxID; j++ ) {
        _dataBook[j].SetID(j+1);
    }
}
void BookData::ExportToFile(string filename) {
    ofstream outfile(filename);
    outfile << _maxID;
    for(Book book:_dataBook) {
        outfile << book.GetID() << endl;
        outfile << book.GetBookID() << endl;
        outfile << book.GetNameBook() << endl;
        outfile << book.GetBookPrice() << endl;
    }
    outfile.close();    
}