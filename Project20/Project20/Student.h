#pragma once
#include "Person.h"
#include <string>
#include <iostream>

using namespace std;

class Student : public Person

{

private:

	string Group;

	int Course;

public:

	Student(string firstName, string secondName, string group, int course) 
		: Person(firstName, secondName)

	{

		Group = group;

		Course = course;

	}

	virtual void print() override

	{

		cout << endl << "Группа: " <<  Group << endl <<

			"Курс: " << Course << endl;

	}

};