#include "Input.h"

istream& operator >> (istream& is, Student& student) {
    cout << " StudentNumber : " ; getline(is,student._StudentNumber);
    cout << " StudentName : " ; getline(is,student._StudentName);
    cout << " BirthDateStudent : " ; getline(is,student._BirthDateStudent);
    cout << " Sex : " ; getline(is,student._Sex);
    return is;
}
istream& operator >> (istream& is, Subject& subject) {
    cout << " SubjectNumber : " ; getline(is,subject._SubjectNumber);
    cout << " SubjectName : " ; getline(is,subject._SubjectName);
    cout << " CreditNumber : " ; is >> subject._CreditNumber; is.ignore();
    return is;    
}
istream& operator >> (istream& is, Mark& mark) {
    cout << " StudentNumber : " ; getline(is,mark._StudentNumber);
    cout << " SubjectNumber : " ; getline(is,mark._SubjectNumber);
    cout << " Score : " ; is >> mark._Score; is.ignore();
    return is;
}