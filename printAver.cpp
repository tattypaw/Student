#include <iostream>
#include <string>
#include "Student.h"

using namespace std;

void Student :: printAver()
{
    cout << "������� ������: " << fixed << setprecision(2) << Student::getAver() << endl;
}
