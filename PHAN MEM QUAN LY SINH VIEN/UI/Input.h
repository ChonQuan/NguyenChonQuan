#ifndef StudentProject_Input_H_
#define StudentProject_Input_H_

#include "../StudentObject/Student.h"
#include "../StudentObject/Mark.h"
#include "../StudentObject/Subject.h"

istream& operator >> (istream&, Student&);
istream& operator >> (istream&, Subject&);
istream& operator >> (istream&, Mark&);

#endif //StudentProject_Input_H_