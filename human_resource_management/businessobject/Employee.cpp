#include "Employee.h"

Employee::Employee(){}
Employee::Employee(string fName, string mInit, string lName, long ssn, string bDate, string address, char sex, int salary, long superSSN, int dno){
    FName = fName;
    MInit = mInit;
    LName = lName;
    SSN = ssn;
    BDate = bDate;
    Address = address;
    Sex = sex;
    Salary = salary;
    SuperSSN = superSSN;
    DNO = dno;
    Id  = ++IdNew;
}
int Employee::GetId(){
    return Id;
}
string Employee::ToString() {
    string s;
    s += "{Fname: " + FName + ", ";
    s += "MInit:" + MInit + ", ";
    s += "Lname: " + LName + ", ";
    s += "SSN: " + to_string(SSN) + ", ";
    s += "BDate: " + BDate + ", ";
    s += "Adrress: " + Address + ", ";
    string str = string(1, Sex);
    s += "Sex: " + str + ", ";
    s += "Salary: " + to_string(Salary) + ", ";
    s += "SuperSSN: " + to_string(SuperSSN) + ", ";
    s += "DNO: " + to_string(DNO) + "}";
    return s;
}
int Employee:: IdNew = 0;
int Employee:: UpdateID(int i){
    Id = i;
    return Id;
}
int Employee:: UpdateIDnew(){
    int i = --IdNew;
    return i;
}