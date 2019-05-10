//
// Created by Zeye Gu on 2019-03-25.
//

#ifndef A3_MONITOR_H
#define A3_MONITOR_H


#include <vector>
#include "Student.h"


class Monitor {
    public:
        virtual ~Monitor();
        virtual void update(Student*)=0;
        void printLogs();
    protected:
        vector<string> myLogs;
};


#endif //A3_MONITOR_H
