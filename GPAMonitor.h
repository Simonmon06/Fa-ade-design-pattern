//
// Created by Zeye Gu on 2019-03-25.
//

#ifndef A3_GPAMONITOR_H
#define A3_GPAMONITOR_H

#include "Monitor.h"
class GPAMonitor : public Monitor{
    public:
        GPAMonitor(float =0);
        virtual void update(Student*);

    private:
        float minGPA;

};


#endif //A3_GPAMONITOR_H
