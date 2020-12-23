#include "EmployeeData.h"

EmployeeData::EmployeeData(){
    _maxId = 0;
    _data.resize(0);
}
int EmployeeData::GetMaxId(){
    return _maxId;
}
int EmployeeData::PushBack(Employee e){
    if (_maxId < e.GetId()){
        _maxId = e.GetId();
    }
    _data.push_back(e);
    return _maxId;
}
Employee EmployeeData::Get(int i){
    return _data[i];
}
Employee* EmployeeData::GetPointer(int i){
    Employee* e = nullptr;
    if (i >= 0 && i<_data.size())
        e = &_data[i];
    return e;
}
int EmployeeData:: Delete(int i){
    _data.erase(_data.begin()+i-1);
    _maxId = _data.size();
    for (int j = i-1;j<_maxId;j++){
        _data[j].UpdateID(j+1);
    }
    Employee temp;
    temp = _data.back();
    temp.UpdateIDnew();
    return _maxId;
}
