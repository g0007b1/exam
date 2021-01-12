#pragma once
#include "Person.h"
#include <string>
#include <iostream>

using namespace std;

class Teacher : public Person
{
private:
public:
    string Subjects;
    Teacher(string firstName, string secondName, string fathersName, string subjects) :
    Person(firstName, secondName, fathersName)
{
    Subjects = subjects;
}
        void print() override
        {
            Person::print();
            cout << "Предмет: " << Subjects << endl;
        }
};
