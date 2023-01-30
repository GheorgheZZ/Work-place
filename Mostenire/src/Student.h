#ifndef STUDENT_H
#define STUDENT_H

#pragma once

#include "Persoana.h" // pentru mostenire tipul si clasa

class Student : public Persoana
{
public:
    Student(int varsta,std::string nume);
    ~Student();

private:

};

#endif