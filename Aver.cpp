#include <iostream>
#include <string>
#include "Student.h"

using namespace std;

double Student :: getAver()
{
    double sum = 0;
    for (int i = 0; i < 3; i++) {
        sum += Student::getMark(i);
    }
    return sum / 3;
}