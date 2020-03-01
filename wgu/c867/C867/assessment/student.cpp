#include <iostream>
#include <string>
#include <iomanip>
#include <array>
#include <sstream>

#include "student.h"
#include "degree.h"

using namespace std;

Student::Student()
{
    studentID = " ";
    firstName = "";
    lastName = "";
    emailAddress= "";
    studentAge = 0;
    daysArray[0] = 0;
    daysArray[1] = 0;
    daysArray[2] = 0;
}

Student::Student(string iD, string fName, string lName, string email,
                int age, int* days)
{
    studentID = iD;
    firstName = fName;
    lastName = lName;
    emailAddress = email;
    studentAge = age;
    daysArray[0] = days[0];
    daysArray[1] = days[1];
    daysArray[2] = days[2];
}

string Student::getStudentID(){
    return studentID;
}

string Student::getFirstName(){
    return firstName;
}

string Student::getLastName(){
    return lastName;
}

string Student::getEmailAddress(){
    return emailAddress;
}

int Student::getAge(){
    return studentAge;
}

int* Student::getNumDays(){
    return daysArray;
}

void Student::setStudentID(string sID){
    studentID = sID;
}

void Student::setFirstName(string fName){
    firstName = fName;
}

void Student::setLastName(string lName){
    lastName = lName;
}

void Student::setEmailAddress(string email){
    emailAddress = email;
}

void Student::setAge(int age){
    studentAge = age;
}

void Student::setNumDays(int day0, int day1, int day2){
    Student::daysArray[0] = day0;
    Student::daysArray[1] = day1;
    Student::daysArray[2] = day2;
}

void Student::print(){
    cout << " First Name: " << getFirstName() << "\t"
         << " Last Name: " << getLastName() << "\t" 
         << " Age: " << getAge() << "\t" 
         << " Days per course: (" << getNumDays()[0]
         << ", " << getNumDays()[1] << ", "
         << getNumDays()[2] << ")"
         << "\t Degree: ";
}

Student::~Student()
{}