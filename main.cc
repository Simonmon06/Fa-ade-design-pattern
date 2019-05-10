/*
 Author: Zeye Gu Student ID: 101036562
Purpose: practice the correct design of an object-oriented program, use UML to document the design

Files:
Control.cc Control.h View.cc View.h Course.cc Course.h def.h in.txt main.cc Makefile Storage.cc Storage.h Student.cc Student.h README.txt

Make sure you are in the right directory

To compile :
make
To launch：
valgrind ./sas < int.txt

 */
#include <iostream>
using namespace std;
#include <string>

#include "defs.h"
#include "Student.h"
#include "Storage.h"
#include "Control.h"


//int  mainMenu();


int main()
{
  Control control;
  control.launch();


  /*
  Storage myStorage;
  int     stuId, courseCode, grade,term;
  int     menuSelection;
  string  instructor;


  while (1) {
    menuSelection = mainMenu();

    if (menuSelection == 0) 
      break;

    else if (menuSelection == 1) {

      cout << "student id:   ";
      cin  >> stuId;
      Student* myStudent = new Student(stuId);

      while (1) {
        cout << "course code <0 to end>:  ";
        cin  >> courseCode;
        if (courseCode == 0)
          break;

        cout << "grade:                   ";
        cin  >> grade;
        cout << "course term:             ";
        cin  >> term;
        cout << "Instructor:              ";
        cin  >> instructor;

        Course* aCourse =new Course(courseCode,grade,term,instructor);
        myStudent->addCourse(aCourse);
      }
      myStorage.addStu(myStudent);
    }
  }

  myStorage.print();

  return 0;
   */
}

/*

int mainMenu()
{
  int numOptions = 1;
  int selection  = -1;

  cout << endl;
  cout << "(1) Add student" << endl;
  cout << "(0) Exit" << endl;

  while (selection < 0 || selection > numOptions) {
    cout << "Enter your selection: ";
    cin  >> selection;
  }

  return selection;
}
*/
