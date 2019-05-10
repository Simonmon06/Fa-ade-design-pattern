//
// Created by Zeye Gu on 2019-02-07.
/* Storage Class : This class will contain all the student information stored in the program.
 * */
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;


#include "Storage.h"


Storage::Storage(){
    numStudents = 0;

}

/*
  Function:  ~Storage
  Purpose:   deallocate the memory of the elements in studentArray

*/
Storage::~Storage()
{
    cout<<"-- Storage dtor"<<endl;
    for(int i=0; i<numStudents;i++){
        delete studentArray[i];
    }
}


/*
  Function:  addStu
  Purpose:   add students to the back of array
  Parameters:
    in:      a student
*/
Storage& Storage::operator+=(Student * newStu){
    if(numStudents< MAX_NUM_STU) {
        studentArray[numStudents] = newStu;
        numStudents++;
    }
    return *this;
}
/*
  Function:  print
  Purpose:   print every students in student array
*/
void Storage::print(){
    for(int i=0; i< numStudents; i++){
        studentArray[i]->print();
    }
}
