#ifndef StudentProject_Mark_H_
#define StudentProject_Mark_H_

#include "StudentObject.h"

using namespace std;

class Mark : public StudentObject {
    private:
        string _StudentNumber;
        string _SubjectNumber;
        int _Score;
    public:
        Mark();
        Mark(string, string, int);
        string GetStudentNumber();
        string GetSubjectNumber();  
        int GetScore();   
        string ToString();
        friend istream& operator >> (istream&, Mark&);
};
#endif //StudentProject_Mark_H_