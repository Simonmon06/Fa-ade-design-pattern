//
// Created by Zeye Gu on 2019-03-25.
//

#ifndef A3_FWMONITOR_H
#define A3_FWMONITOR_H


#include "Monitor.h"

class FWMonitor : public Monitor{

    public:
        FWMonitor(int=0);
        virtual void update(Student*);
    private:
        int minFW;
};


#endif //A3_FWMONITOR_H
