#include <iostream>
#include <cstdlib>
#include <string>


#include "NODE.h"
#include "Thai_person.h"
#include "MU_Person.h"
#include "student.h"
#include "LL.h"


#include "NODE.cpp"
#include "LL.cpp"

using namespace std;

int main(int argc, char *argv[]) {
    LL myLL;

    for (int i = 1; i < argc; i += 3) {
        if (i + 2 < argc) {
            long id = atol(argv[i]);
            double gpa = atof(argv[i+1]);
            string name = argv[i+2];
            
            NODE* A = new student(id, gpa, name, 1234); 
            myLL.add_node(A);
        }
    }

    cout << endl;
    
    myLL.show_all();
    
    cout << endl;

    return 0;
}
