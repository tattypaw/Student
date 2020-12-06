#include <iostream>
#include <string>
#include "Student.h"

using namespace std;

void Student ::print()
{
    cout << Student::getName() << endl;
    cout << "ќценки :";
    for (int i = 0; i < 3; i++) {
        cout << setw(4) << Student::getMark(i);
    }
    cout << endl;
}