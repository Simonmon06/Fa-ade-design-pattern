/*
CourseList: Store courses. Derive from the template List class of Course pointers


*/
#include "CourseList.h"
#include <iostream>
using namespace std;
#include <iomanip>



/*
  Function:  computeGPA
  Purpose:    returns the GPA for this student

*/
float CourseList:: computeGPA (){
  float gpa, totalmark;
  int count;
  gpa = 0;
  totalmark = 0;
  count = 0;

  Node * currNode =  head;
  while (currNode !=NULL){
      if (currNode->data->getGrade() != -1){
          totalmark += currNode->data->getGrade();
          ++count;
      }
      currNode = currNode->next;
  }
  gpa = totalmark/count;
  return gpa;
}


/*
  Function:  computeNumFW
  Purpose:   returns the number of FW courses for this student
*/

int CourseList::computeNumFW(){
    int count=0;
    Node * currNode = head;
    while(currNode !=NULL){
        if(currNode->data->getGrade() == 0 ||currNode->data->getGrade() == -1 )
        {
            ++count;

        }
        currNode = currNode->next;
    }

    return count;
}
