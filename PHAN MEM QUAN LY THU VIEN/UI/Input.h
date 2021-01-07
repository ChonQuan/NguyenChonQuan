#ifndef LibraryProject_Input_H_
#define LibraryProject_Input_H_

#include "../LibraryObject/LibraryObject.h"
#include "../LibraryObject/Member.h"
#include "../LibraryObject/Book.h"
#include "../LibraryObject/BorrowReturn.h"

istream& operator >> (istream& is, Member& member);
istream& operator >> (istream& is, Book& book);
istream& operator >> (istream& is, BorrowReturn& borrowreturn);

#endif //LibraryProject_Input_H_