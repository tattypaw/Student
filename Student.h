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
    double averMark;
    double Aver();

public:
    Student() {}
    double getAverMark()
    {
        averMark = Aver();
        return averMark;
    }

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
    
    void printAver();
 
    void setMarks() {
        cout << "Введите оценки :"<<endl;
        int mark;
        for (int i = 0; i < 3; i++) {
            cout << "Оценка "<<i+1<<" - " << setw(4);
            cin >> mark;
            setMark(mark, i);
        }
        cout << endl;
    }
};

