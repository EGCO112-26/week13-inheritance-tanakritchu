#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <string>
#include "MU_Person.h"
using namespace std;

class student : public MU_person {
private:
    double gpa; 
  
public:
    student(long = 111, double = 2.5, string = "Nattawut", long = 555);
    ~student();
    void display(); 
};

student::student(long i, double g, string s, long nid) : MU_person(i, s, nid) {
    gpa = g;
    cout << "MU student constructor  " << gpa << endl;
}

void student::display() {
    display_person();
    cout << " Gpa " << gpa << endl;
}

student::~student() {
    // ปล่อยว่างไว้ให้ตรงกับผลลัพธ์ตัวอย่าง
}

#endif