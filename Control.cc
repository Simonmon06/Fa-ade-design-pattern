/*
Control Class
The Control class will perform all user I/O using the View class. It will not interact with the user directly.
 */


#include <iostream>
using namespace std;
#include "Control.h"
#include "GPAMonitor.h"
#include "FWMonitor.h"
#include <string>

Control::Control() {
    GPAMonitor* aGPAMonitor = new GPAMonitor(3.0);
    FWMonitor* aFWMonitor = new FWMonitor(2);
    monitorVector.push_back(aGPAMonitor);
    monitorVector.push_back(aFWMonitor);

    int id, code, grade, term;
    string instructor;

    stringstream ss;
    vector<string>  cloudStu;

    stuServer.retrieve(cloudStu);

    for(int i = 0; i < cloudStu.size(); ++i){
        ss.clear();
        ss.str(cloudStu[i]);
        ss>> id;
        Student * aStu = new Student(id);

        while(1){
          ss >> code;
          if(code == 0)
            break;

          ss >> term >> grade >> instructor;
          *aStu += new Course(code,grade,term,instructor);
        }
            myStorage += (aStu);
            notify(aStu);

    }


}

Control ::~Control() {
    for(int i = 0 ; i < monitorVector.size(); ++i){
        monitorVector[i]->printLogs();
        delete monitorVector[i];
    }
}

/*
  Function:  launch
  Purpose:   a member function to start the program
*/
void Control ::launch() {

    int selection = -1 ;
    int stuId, courseCode, grade,term;
    string  instructor;

    Course* aCourse;

    view.mainMenuSelection(selection); //First run the menu, if users enter 0, just end the program.

    while(selection ==1){
        view.readStudentID(stuId);
        Student* myStudent = new Student(stuId);

        view.readCourse(courseCode,grade,term,instructor);
        while(courseCode !=0){
            aCourse =new Course(courseCode,grade,term,instructor);
            *(myStudent)+=(aCourse);
            //view.print(myStorage);

            courseCode = 0;
            view.readCourse(courseCode,grade,term,instructor);

        }
        myStorage+=(myStudent);
        notify(myStudent);
        selection = -1;
        view.mainMenuSelection(selection);



    }
    view.print(myStorage);

}
/*
  Function:  notify
  Purpose:   loop over the collection of monitors and call the update() function on each monitor objec
  Parameters:
    in:      a student
*/
void Control::notify(Student* newStu){
    for(int i=0; i<monitorVector.size(); ++i){
        monitorVector[i]->update(newStu);
    }
}
