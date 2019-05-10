/*
GPAMonitor class
 GPAMonitor class  will document which students have a GPA below the preset minimum.
 */


#include "GPAMonitor.h"

GPAMonitor::GPAMonitor(float t){
    minGPA = t;
}

/*
  Function:  update
  Purpose:   check if the given student’s GPA is below the minimum threshold;
  Parameters:
    in:      a student
*/
void  GPAMonitor ::update(Student * student) {
    if(student->computeGPA() < minGPA){
        string aLog = "Student id : " + to_string(student->getId()) + " with GPA " + to_string(student->computeGPA());
        myLogs.push_back(aLog);
    }
}