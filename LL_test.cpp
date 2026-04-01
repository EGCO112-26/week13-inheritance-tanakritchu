#include <iostream>
#include <cstdlib> // ใช้สำหรับ atof, atol แปลงสตริงเป็นตัวเลข
#include <string>
#include "NODE.h"
#include "Thai_person.h"
#include "MU_Person.h"
#include "student.h"
#include "LL.h"

using namespace std;

// รับค่าจาก command line 
// ตัวอย่าง: ./inh 012  3.0 pupha 120  3.1 ryan
int main(int argc, char *argv[]) {
    LL myLL;

    // วนลูปเพื่อดึงค่ามาทีละ 3 ตัว (id, gpa, name)
    for (int i = 1; i < argc; i += 3) {
        if (i + 2 < argc) {
            long id = atol(argv[i]);       // แปลง string เป็น long
            double gpa = atof(argv[i+1]);  // แปลง string เป็น double
            string name = argv[i+2];
            
            // สร้าง student object ในรูปของ Pointer ไปยัง Base Class (NODE*)
            NODE* A = new student(id, gpa, name, 1234); 
            myLL.add_node(A);
        }
    }

    cout << endl;
    
    // แสดงผลข้อมูลทั้งหมด
    myLL.show_all();
    
    cout << endl;

    return 0;
}