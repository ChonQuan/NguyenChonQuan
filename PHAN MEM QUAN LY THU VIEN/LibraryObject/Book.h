#ifndef LibraryProject_Book_H_
#define LibraryProject_Book_H_

#include <iostream>
#include <string>

#include "LibraryObject.h"

using namespace std;

class Book : public LibraryObject {
    private:
        int _BookID;
        string _NameBook;
        float _BookPrice;
    public:
        Book();
        Book(int, string, float);
        int GetBookID();
        string GetNameBook();
        float GetBookPrice();   
        string ToString();    
        friend istream& operator >> (istream&, Book& );
};
#endif  //LibraryProject_Book_H_