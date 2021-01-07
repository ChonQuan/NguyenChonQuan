#ifndef StudentProject_Subject_H_
#define StudentProject_Subject_H_

#include "StudentObject.h"

using namespace std;

class Subject : public StudentObject {
    private:
        string _SubjectNumber;
        string _SubjectName;
        int _CreditNumber;
    public:
        Subject();
        Subject(string, string, int);
        string GetSubjectNumber();
        string GetSubjectName();  
        int GetCreditNumber();   
        string ToString();
        friend istream& operator >> (istream&, Subject&);
};
#endif //StudentProject_Subject_H_