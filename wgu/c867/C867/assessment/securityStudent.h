#pragma once
#ifndef SECURITYSTUDENT_H
#define SECURITYSTUDENT_H

#include "student.h"
#include "degree.h"

 class SecurityStudent : public Student {
public:
    SecurityStudent();

    SecurityStudent(
        string sID,
        string sName,
        string sLast,
        string sEmail,
        string sAge,
        int* sDays,
        Degree sDeg
            );

    Degree getDegree() ovveride;
        void print() override;
        ~SecurityStudent();
private:
    };

#endif
