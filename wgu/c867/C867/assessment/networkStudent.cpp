#include <iostream>
#include <string>
#include <iomanip>

#include "networkStudent.h"
#include "student.h"
#include "degree.h"

using namespace std;

NetworkStudent::NetworkStudent():Student(){
	degree = Degree::NETWORKING;
}

NetworkStudent::NetworkStudent(string sID, string sName, string sLast, string sEmail,
							   int sAge, int* sDays, Degree sDeg): 
							   Student::Student(sID, sName, sLast, sEmail, sAge, sDays){
degree = Degree::NETWORKING;
}

Degree NetworkStudent::getDegree(){
	return degree = Degree::NETWORKING;
}

void NetworkStudent::print(){
	this->Student::print();
	cout << "Networking" << endl;
}

NetworkStudent::~NetworkStudent(){
	Student::~Student();
}