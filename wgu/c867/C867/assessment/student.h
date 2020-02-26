#pragma once
#ifndef STUDENT_H
#define STUDENT_H

#include <iomanip>
#include <string>

#include "degree.h"

using namespace std;

class Student {
    public:
        const static int daysArraySize = 3;

    protected:
        string studentID;
        string firstName;
        string lastName;
        string emailAddress;
        int studentAge;
        int daysArray(daysArraySize);
        Degree degree;

    public:
        //Default Value Constructor
        Student();

        Student(string iD, string fName, string lName, string email,
                int age, int* days);

        //Getters
        string getFirstName();
        string getLastName();
        string getEmailAddress();
        string getStudentID();
        int getAge();
        int* getNumDays();

        //Setters
        void setFirstName(string firstName);
        void setLastName(string lastName);
        void setEmailAddress();
        void setAge(int age);
        void setStudentID(string studentID);
        void setNumDays(int day0, int day1, int day2);

        //Virtual functions
        virtual void print();
        virtual Degree getDegree() = 0;

        //Deconstructor
        ~Student();
};

#endif // !STUDENT_H
