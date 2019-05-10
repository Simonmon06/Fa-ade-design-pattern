//
// Created by Zeye Gu on 2019-03-10.
//

#ifndef A2_VIEW_H
#define A2_VIEW_H


#include "Storage.h"

class View {
public:
    void mainMenuSelection(int &);
    void readStudentID(int &);
    void readCourse(int &, int&,int&,string &);
    void print(Storage&);



};


#endif //A2_VIEW_H
