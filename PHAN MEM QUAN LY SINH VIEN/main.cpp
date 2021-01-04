#include <iostream>

#include "StudentObject/Student.h"
#include "StudentDataAccess/StudentData.h"
#include "StudentDataAccess/MarkData.h"
#include "StudentObject/Mark.h"
void LietKeDiemCao(int N,MarkData markdata) {
        vector<Mark> markdatatemp = markdata.GetDataMark();
        for (int i = 0; i<markdata.GetSize()-1;i++) {
                for (int j = i + 1 ; j < markdata.GetSize(); j++) {
                        if(markdatatemp[i].GetMarkNumber() > markdatatemp[j].GetMarkNumber()) {
                                Mark marktemp = markdatatemp[i];
                                markdatatemp[i] = markdatatemp[j];
                                markdatatemp[j] = marktemp;
                        }
                }
        }
        if ( N > markdatatemp.size()) N = markdatatemp.size();
        for (int i = markdatatemp.size()-1;i>(markdatatemp.size()-1-N);i--) {
                cout << markdatatemp[i].GetStudentNumber() << " " << markdatatemp[i].GetSubjectNumber() << " " << markdatatemp[i].GetMarkNumber() << endl;
        }
}
using namespace std;
int main() {
    MarkData markdata;
    markdata.ReadToFile("MarkData.txt");
    for (Mark mark:markdata.GetDataMark()) {
        cout << mark.GetID() << " " << mark.GetStudentNumber() << " " << mark.GetSubjectNumber() << " " << mark.GetMarkNumber() << endl;
    }
    cout << endl;
    LietKeDiemCao(2,markdata);
    return 0;
}