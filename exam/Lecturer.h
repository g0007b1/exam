#pragma once
#include <iostream>
#include <string>
#include "Teacher.h"

using namespace std;
class Lecturer : public Teacher
{
private:
public:
    string Groups;
    Lecturer(string firstName, string secondName, string fathersName, string subjects, string groups) :
    Teacher(firstName, secondName, fathersName, subjects)
{
    Groups = groups;
}
public:
    virtual void print()override
    {
        Person::print();
        cout << "Группы: " << Groups << endl;
    }
    void print2()
    {
        Person::print();
        cout << "Группы: " << Groups << endl;
    }
};
