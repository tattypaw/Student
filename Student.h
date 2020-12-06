#pragma once
#include <iostream>
#include <iomanip>
#include <string>
#include <conio.h>

using namespace std;

class Student
{
private:
    string name;
    int marks[3];
public:
    Student() {}
   /* Student(const string name, const int* marks)
    {
        this->name = name;
        for (int i = 0; i < 3; i++) {
            Student::marks[i] = marks[i];
        }
    } */

    double getAver();
    /*{
        double sum = 0;
        for (int i = 0; i < 3; i++) {
            sum += marks[i];
        }
        return sum / 3;
    }*/

    string getName()
    {
        return name;
    }

    void setName(string studentName)
    {
        name=studentName;
    }

    int getMark(int index)
    {
        return marks[index];
    }

    void setMark(int mark, int index)
    {
        if (mark < 1 || mark>5) {
            mark = 0;
        }
        marks[index] = mark;
    }

    void print();
    /*{
        cout << name << endl;
        cout << "Оценки :";
        for (int i = 0; i < 3; i++) {
            cout << setw(4) << marks[i];
        }
        cout << endl;
    }*/

    void printAver();
   /* {
        cout << "Средняя оценка: " << fixed << setprecision(2) << getAver() << endl;
    }*/

    void setMarks() {
        cout << "Введите оценки :"<<endl;
        int mark;
        for (int i = 0; i < 3; i++) {
            cout << "Оценка "<<i+1<<" - " << setw(4);
            cin >> mark;
            setMark(mark,i);
        }
        cout << endl;
    }
};

