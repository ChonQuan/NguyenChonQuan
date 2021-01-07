#include "Member.h"

Member::Member() {

}
Member::Member(int MemberID, string NameMember) {
    _MemberID = MemberID;
    _NameMember = NameMember;
}
int Member::GetMemberID() {
    return _MemberID;
}
string Member::GetNameMember() {
    return _NameMember;
}   
string Member::ToString() {
    string s;
    s = "ID : " + to_string(ID) + "|";
    s += "MemberID : " + to_string(_MemberID) + "|";
    s += "MemberName : " + _NameMember + "|";
    return s;
}    