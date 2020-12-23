#include <iostream>
#include "businessobject/Employee.h"
#include "dataaccess/EmployeeData.h"
using namespace std;

void display(EmployeeData& employeeData){
	for(int i=0;i<employeeData.GetMaxId();i++){
	cout <<employeeData.Get(i).GetId()<<employeeData.Get(i).ToString()<<endl; 	
	}
}
int main(){
    cout << "hello" << endl;
    Employee e1("Chau", "Bao", "Ngo", 111222333, "1975-04-30", "Chicago", 'M', 10000, -1, 1);
    Employee e2("Chau", "Bao", "Ngo", 111222333, "1975-04-30", "Chicago", 'M', 10000, -1, 2);
    Employee e3("Chau", "Bao", "Ngo", 111222333, "1975-04-30", "Chicago", 'M', 10000, -1, 3);
    Employee e4("Chau", "Bao", "Ngo", 111222333, "1975-04-30", "Chicago", 'M', 10000, -1, 4);
    Employee e5("Chau", "Bao", "Ngo", 111222333, "1975-04-30", "Chicago", 'M', 10000, -1, 5);
    EmployeeData employeeData;
    employeeData.PushBack(e1);
    employeeData.PushBack(e2);
    employeeData.PushBack(e3);
    employeeData.PushBack(e4);
    employeeData.PushBack(e5);
	
	display(employeeData);
	cout <<endl;
	employeeData.Delete(2);
	
	display(employeeData);
	cout << endl;
	Employee e6("Chau", "Bao", "Ngo", 111222333, "1975-04-30", "Chicago", 'M', 10000, -1, 6);
	employeeData.PushBack(e6);
	display(employeeData);
    return 0;
}

