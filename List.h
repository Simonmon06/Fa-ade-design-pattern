//
// Created by Zeye Gu on 2019-03-10.
//


#include <iostream>
using namespace std;
#include <string>


#include "Course.h"

template <class T>
class List {
public:
    List();
    ~List();

    void print();
    List<T>& operator+=(T);
protected:
  class Node
  {
      friend class List;
      friend class CourseList;
  protected:
      T data;
      Node * next;
  };
    Node * head;
    Node * tail;


};


/*
List class
 List class  holds a singly linked list of Course pointers with head  and tail, no dummy nodes.
 */

template <class T>
List<T>::List() : head(0), tail(0) { }

template <class T>
List<T>::~List()
{
    Node* currNode = head;
    Node* nextNode;

    while (currNode != NULL) {
        nextNode = currNode->next;
        delete currNode->data;
        delete currNode;
        currNode = nextNode;
    }
}
/*
  Function:  add
  Purpose:   add course to linked list
  Parameters:
    in:      a course

*/
template <class T>
List<T>& List<T>::operator+=(T course)
{//add we consider four situations, add to beginning, end, mid and empty
    Node* tmpNode;
    Node* currNode;
    Node* prevNode;

    tmpNode = new Node;
    tmpNode->data = course;
    tmpNode->next = NULL;

    currNode = head;
    prevNode = NULL;

    while (currNode != NULL) { // if skip the first iteration  while loop add in empty list
        if (tmpNode->data->lessThan(currNode->data))
            break;
        prevNode = currNode;
        currNode = currNode->next;
    }

    if (prevNode == NULL) { //in first iteration we break to here means add at beginning
        if(currNode ==NULL){
            head = tmpNode;
            tail = tmpNode;
        }else{
            head = tmpNode;

        }

    }
    else {
        prevNode->next = tmpNode; //add mid

        if(currNode == NULL){
            tail = tmpNode;
        }
    }

    tmpNode->next  = currNode;//add last
    return *this;
}

/*
  Function:  print
  Purpose:    print the list and indicate the first node and the last node

*/
template <class T>
void List<T>::print()
{
    Node* currNode = head;
    Node* prevNode = NULL;

    while (currNode != NULL) {
        prevNode = currNode;
        currNode->data->print();
        currNode = currNode->next;
    }
    if(prevNode !=NULL){
        cout << "First Course is:  "<<endl;
        head->data->print();
        cout << "Last Course is:   " <<endl;
        tail->data->print();
    }


}
