/*
Monitor class
 Monitor class is a abstract class that serves as the base class for the observers in the Observer design pattern.
 */

#include <iostream>
#include "Monitor.h"

Monitor::~Monitor() {

}

/*
  Function:  printLogs
  Purpose:  print logs

*/
void Monitor::printLogs() {
    cout<<"The collection of logs"<<endl;
    for (int i=0; i<myLogs.size(); ++i){
        cout << myLogs[i] << endl;
    }
}