#pragma once
#ifndef SOFTWARESTUDENT_H
#define SOFTWARESTUDENT_H

#include "student.h"
#include "degree.h"

class SoftwareStudent : public Student
{
public:
	SoftwareStudent();

	SoftwareStudent(string iD, string sName, string sLast, string sEmail,
		int sAge, int* sDays, Degree sDeg);

	Degree getDegree() override;
	void print() override;
	~SoftwareStudent();
private:

};
#endif // !SOFTWARESTUDENT_H
