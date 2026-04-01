#ifndef MU_PERSON_H
#define MU_PERSON_H

#include <iostream>
#include <string>
#include "Thai_person.h"
#include "NODE.h" // ต้อง Include NODE เข้ามาเพื่อทำสืบทอด
using namespace std;

// สืบทอดจากทั้ง Thai_person และ NODE
class MU_person : public NODE, public Thai_person { //เปลี่ยนจาก class MU_person : public Thai_person, public NODE
protected:
    long id;
    string name;

public:
    MU_person(long = 112, string = "Prapaporn", long = 1234);
    void display_person();
    ~MU_person();
};

// นำ id (x) ส่งขึ้นไปเป็น data ของ NODE 
MU_person::MU_person(long x, string n, long nid) : Thai_person(nid), NODE(x) {
    id = x;
    name = n;
    cout << "MU person constructor " << id << endl;
}

void MU_person::display_person() {
    // ข้อ 1.5 เรียก display_thai() เพื่อแสดงค่าทุกอย่าง
    display_thai();
    cout << " id: " << id << endl;
    cout << " name: " << name << endl;
}

MU_person::~MU_person() {
    // ปล่อยว่างไว้ให้ตรงกับผลลัพธ์ตัวอย่าง
}

#endif