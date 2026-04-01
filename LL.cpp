#include <iostream>
#include "NODE.h"
#include "LL.h"
using namespace std;

LL::LL() {
    hol = NULL;
    size = 0;
}

LL::~LL() {
    // Clear all nodes
    NODE* t = hol;
    for (int i = 0; i < size; i++) {
        NODE* next = t->move_next();
        delete t;
        t = next;
    }
}

void LL::show_all() {
    NODE* t = hol;
    for (int i = 0; i < size; i++) {
        // ข้อ 5: แสดงผลเหมือน node ปกติ
        t->show_node();
        t = t->move_next();
    }
}

void LL::add_node(NODE *&A) {
    if (hol != NULL) {
        hol->insert(A); // แทรกเข้ามาด้านหน้า
    }
    hol = A; // ขยับ Head (hol) มาที่ตัวใหม่
    size++;
}