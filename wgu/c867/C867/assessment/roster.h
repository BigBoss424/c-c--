#ifndef ROSTER_H
#define ROSTER_H

#include "student.h"
#include "degree.h"
#include <array>
#include <string>

class Roster{
private:
    Student* classRosterArray[5];

public:
    Roster();

    int increment = 0;

    void add(string studID, string fName, string emAddr, int a, int day0, int day1, int day2, Degree);
    void printAll();
    void printInvalidEmails();
    void printAverageDaysInCourse(string);
    void printByDegreeProgram(string degree);
    void remove(string studentID);

    virtual ~Roster();

};

#endif // !ROSTER_H
