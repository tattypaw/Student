// Student.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <iomanip>
#include <string>
#include <conio.h>
#include "Student.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    cout << "Успеваемость студента." << endl << endl;
    Student student;
    string studentName;
    cout << "Введите фамилию и инициалы студента: "; cin>> studentName;
    student.setName(studentName);
    student.setMarks();
    double aver = student.getAverMark();
    student.print();
    student.printAver();
    _getch();
    return 0;
}

