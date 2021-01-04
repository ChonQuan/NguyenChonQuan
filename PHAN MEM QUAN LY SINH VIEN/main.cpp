#include <iostream>

#include "StudentObject/Student.h"
#include "StudentDataAccess/StudentData.h"
#include "StudentDataAccess/MarkData.h"
#include "StudentObject/Mark.h"

int main() {
    MarkData markdata;
    markdata.ReadToFile("MarkData.txt");
    return 0;
}