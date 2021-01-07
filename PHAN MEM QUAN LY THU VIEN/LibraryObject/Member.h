#ifndef LibraryProject_Member_H_
#define LibraryProject_Member_H_

#include <iostream>
#include <string>

#include "LibraryObject.h"

using namespace std;

class Member : public LibraryObject {
    private:
        int _MemberID;
        string _NameMember;
    public:
        Member();
        Member(int, string);
        int GetMemberID();
        string GetNameMember();    
        string ToString();     
        friend istream& operator >> (istream&, Member& );
};
#endif  //LibraryProject_Member_H_