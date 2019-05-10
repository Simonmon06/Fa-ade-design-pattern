//
// Created by Zeye Gu on 2019-02-07.
//

#ifndef SAS_STORAGE_H
#define SAS_STORAGE_H

#include "defs.h"
#include "Student.h"

class Storage {
    public:
    Storage();
    ~Storage();
    Storage& operator+=(Student *);
    void print();


    private:
    Student* studentArray[MAX_NUM_STU];
    int numStudents;


};


#endif //SAS_STORAGE_H
