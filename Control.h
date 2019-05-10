//
// Created by Zeye Gu on 2019-03-10.


#ifndef A2_CONTROL_H
#define A2_CONTROL_H


#include "Storage.h"
#include "View.h"
#include "Monitor.h"
#include "GPAMonitor.h"
#include "FWMonitor.h"
#include "StuServer.h"
#include <sstream>

class Control {

public:
    Control();
    ~Control();
    void launch();
    void notify(Student* newStu);

private:
    Storage myStorage;
    View view;
    vector<Monitor*> monitorVector;
    StuServer stuServer;



};


#endif //A2_CONTROL_H
