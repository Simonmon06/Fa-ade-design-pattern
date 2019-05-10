/*
FWMonitor class
 FWMonitor class  will document which students have failed or withdrawn from a number of courses higher than another preset value
 */

#include "FWMonitor.h"

FWMonitor::FWMonitor(int t){
    minFW = t;
}

/*
  Function:  update
  Purpose:    check if the given student’s number of FW courses is greater than the threshold;
  Parameters:
    in:      a student
*/
void  FWMonitor ::update(Student * student) {
    if(student->computeNumFW() > minFW){
        string aLog = "Student id : " + to_string(student->getId()) + " with number of FW courses: " + to_string(student->computeNumFW());
        myLogs.push_back(aLog);
    }
}