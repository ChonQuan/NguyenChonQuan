#ifndef Project_dataaccess_Employee_Data_H_
#define Project_dataaccess_Employee_Data_H_
#include <vector>
#include "../businessobject/Employee.h"

class EmployeeData{
private:
    vector<Employee> _data;
    int _maxId;
public:
    EmployeeData();
    int GetMaxId();
    int PushBack(Employee);
    Employee Get(int i);
    Employee* GetPointer(int i);
    int Delete(int i);
};
#endif