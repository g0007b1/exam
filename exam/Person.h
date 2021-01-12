#pragma once
#include <iostream>
#include <string>
using namespace std;

 class Person
 {
private:
    
 protected:
    Person(string firstName, string secondName, string fathersName)
{
    FirstName = firstName;
    SecondName = secondName;
    FathersName = fathersName;
}
public:
     string FirstName;
     string SecondName;
     string FathersName;
    virtual void print()
    {
        cout  << "Имя: " << FirstName << endl <<
        "Фамилия: " << SecondName << endl << "Отчество: " << FathersName << endl;
    }
 };
