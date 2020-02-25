#include <iostream>
#include <math.h>
#include <cstdlib>
#include <string>
#include <iomanip>
#include <array>
#include <sstream>

#include "student.h"
#include "degree.h"

using namespace std;

Student::Student()
{
    SID = "";
    firstName = "";
    lastName = "";
    email =
    age =
    daysArray[0] = 0;
    daysArray[1] = 0;
    daysArray[2] = 0;
}

Student::Student(string id, string fName, string lName, string email, int age, int* days)
{
    SID = id;
    firstName = fName;
    lastName = lName;
    email = email;
