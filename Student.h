#ifndef STUDENT_H
#define STUDENT_H

#include "defs.h"
#include "Course.h"
#include "CourseList.h"

class Student
{
  public:
    Student(int=0);
    ~Student();
    Student& operator+=(Course*);
    void print();
    float computeGPA();
    int computeNumFW();
    int getId();


  private:
    int    id;
    CourseList myList;

};

#endif
