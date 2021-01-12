#pragma once
#include "Person.h"
#include <string>
#include <iostream>

using namespace std;
class Student : public Person
{
private:
public:
    string Group;
    Student(string firstName, string secondName, string fathersName, string group)
        : Person(firstName, secondName, fathersName)
    {
        Group = group;
    }
    virtual void print() override
    {
        Person::print();
        cout << "Группа: " <<  Group << endl;
    }
};
