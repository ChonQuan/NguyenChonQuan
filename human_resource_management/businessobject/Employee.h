#ifndef Project_businessobject_Employee_h_
#define Project_businessobject_Employee_h_
#include <string>
using namespace std;
class Employee{
    int Id; //id is increasing number
    string FName, MInit, LName;
    long SSN;
    string BDate, Address;
    char Sex;
    int Salary;
    long SuperSSN;
    int DNO;
    static int IdNew;
public:
    Employee();
    Employee(string fName, string mInit, string lName, long ssn, string bDate, string address, char sex, int salary, long superSSN, int dno);
    int GetId();
    string ToString();
    int UpdateID(int i);
    int UpdateIDnew();

};

#endif