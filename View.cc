
/*

View Class
The Control class  is responsible for interacting with the user.
 */

#include <iostream>
#include <iomanip>
using namespace std;
#include <string>

#include "View.h"

/*
  Function:  mainMenuSelection
  Purpose:   a member function for displaying the main menu and reading the user’s selection
  Parameters:
    in:       selection
*/
void View ::mainMenuSelection(int & selection){
    int numOptions = 1;
    //int selection  = -1;

    cout << endl;
    cout << "(1) Add student" << endl;
    cout << "(0) Exit" << endl;

    while (selection < 0 || selection > numOptions) {
        cout << "Enter your selection: ";
        cin  >> selection;
    }


}
/*
  Function:  readStudentID
  Purpose:   a member function for reading the student id
  Parameters:
    out:      student Id
*/
void View ::readStudentID(int & stuId) {
    cout << "student id:   ";
    cin  >> stuId;
    //Student* myStudent = new Student(stuId);
}

/*
  Function:  readCourse
  Purpose:   a member function for reading all the information from the user about one course
  Parameters:
    out:      course code
    out:      grade
    out:      term
    out:      instructor
*/
void View ::readCourse(int & courseCode, int & grade, int& term, string & instructor ) {
    cout << "course code <0 to end>:  ";
    cin  >> courseCode;
    if (courseCode == 0)
        return;

    cout << "grade:                   ";
    cin  >> grade;
    while(grade<-1||grade > 12){
        cout << "Incorrect grade. Please enter again" << endl;
        cout << "grade:                   ";
        cin  >> grade;
    }
    cout << "course term:             ";
    cin  >> term;
    cout << "Instructor:              ";
    cin  >> instructor;
}

/*
  Function:  print
  Purpose:   a member function for printing out the storage;
  Parameters:
    in:     Storage
*/
void View::print(Storage& myStorage) {
    myStorage.print();
}