
/*
 * Course Class: A course with course code, grade, term and instructor. Courses can be compared by using course code and term
 * */

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

#include "Course.h"

Course::Course(int c, int g, int t, string n)
{
  code  = c;
  grade = g;
  term = t;
  instructor = n;
}

/*
  Function:  print
  Purpose:   print a student information
*/
void Course::print()
{
  string str;

  cout << "-- COMP " << code << ":  ";
  cout << right << setw(2) << term   << "  ";
  cout << left << setw(20) << instructor   << "  ";
  cout << right << setw(2) << grade   << "  ";
  getGradeStr(str);
  cout << left << setw(3) << str << endl;

}

void Course::getGradeStr(string& gradeStr)
{
  string gradeStrings[] = {
    "WDN", "F", "D-", "D", "D+", "C-", "C", "C+",
    "B-", "B", "B+", "A-", "A", "A+" };

  if ( grade >= -1 && grade <= 12 )
    gradeStr = gradeStrings[grade+1];
  else
    gradeStr = "Unknown";
}


#include <iomanip>
bool Course::lessThan(Course* course){
  if(code< course->code){
    return true;
  }
  else if(code == course->code ){
    if(term < course->term){
      return true;
    }else{
      return false;
    }
  }
  else {
    return false;
  }
}

int Course::getGrade() {
  return grade;
}
