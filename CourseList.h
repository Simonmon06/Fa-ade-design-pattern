
#ifndef A4_COURSELIST_H
#define A4_COURSELIST_H

#include "List.h"
#include "Course.h"

class CourseList: public List<Course*>{
  public:

    float computeGPA();
    int computeNumFW();

};

#endif
