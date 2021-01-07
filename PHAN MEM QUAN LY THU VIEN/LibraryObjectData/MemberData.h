#ifndef LibraryProject_MemberData_H_
#define LibraryProject_MemberData_H_

#include "LibraryObjectData.h"

class MemberData : public LibraryObjectData {
    private:
        vector<Member> _dataMember;
        int _maxID;
    public:
        MemberData();
        vector<Member> GetDataMember();
        LibraryObject* GetPointer(int);
        int GetMaxID();
        int GetSize();
        int Create(Member&);
        void Read(string);
        void Update(int&, Member&);
        void Delete(int&);
        void ExportToFile(string);
};
#endif  //LibraryProject_MemberData_H_