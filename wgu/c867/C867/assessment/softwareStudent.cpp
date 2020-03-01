#include <iostream>
#include <string>
#include <iomanip>

#include "softwareStudent.h"
#include "student.h"
#include "degree.h"

using namespace std;

SoftwareStudent::SoftwareStudent():Student(){
	degree = Degree::SOFTWARE;
}

SoftwareStudent::SoftwareStudent(string sID, string sName, string sLast, string sEmail,
							   int sAge, int* sDays, Degree sDeg): 
							   Student::Student(sID, sName, sLast, sEmail, sAge, sDays){
degree = Degree::SOFTWARE;
}

Degree SoftwareStudent::getDegree(){
	return degree = Degree::SOFTWARE;
}

void SoftwareStudent::print(){
	this->Student::print();
	cout << "Software" << endl;
}

SoftwareStudent::~SoftwareStudent(){
	Student::~Student();
}