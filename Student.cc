/*
 * Student Class: A student that have 0 to * courses.*/

#include <iostream>

#include <string>
using namespace std;

#include "Student.h"

Student::Student(int i)
{
  id = i;


}
/*
  Function:  ~Student
  Purpose:   deallocate the memory of the elements in course array

*/
Student::~Student(){

}


/*
  Function:  print
  Purpose:   print all the courses that a student has
*/
void Student::print()
{
  cout<< endl << "Id: " << id << endl;

  myList.print();
}
/*
  Function:  addCourse
  Purpose:   add course in the back of course array.
  Parameters:
    in:      a course
*/
Student& Student::operator+=(Course * myCourse){
    myList+=( myCourse);
    return *this;


}

float Student::computeGPA(){
    return myList.computeGPA();
}


int Student::computeNumFW(){
    return myList.computeNumFW();
}

int Student::getId(){
    return id;
}
