#include <iostream>
#include <string>
#include <iomanip>

#include "securityStudent.h"
#include "student.h"
#include "degree.h"

using namespace std;

SecurityStudent::SecurityStudent():Student() {
	degree = Degree::SECURITY;
}

SecurityStudent::SecurityStudent(string sID, string sName, string sLast,
								 string sEmail, int sAge, int* sDays, Degree sDeg)
								: Student::Student(sID, sName, sLast, sEmail, sAge, sDays) 
{
	degree = Degree::SECURITY;
}

Degree SecurityStudent::getDegree() {
	return degree = Degree::SECURITY;
}

void SecurityStudent::print() {
	this->Student::print();
	cout << "Security" << endl;
}

SecurityStudent::~SecurityStudent() {
	Student::~Student();
}