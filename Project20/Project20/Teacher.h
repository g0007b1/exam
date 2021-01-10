#pragma once
#include "Person.h"
#include <string>
#include <iostream>

using namespace std;

class Teacher : public Person
{

private:

	string AcademicDegree;

	string Subjects;

public: Teacher(string firstName, string secondName, string academicDegree, string subjects) :

	Person(firstName, secondName)

{

	AcademicDegree = academicDegree;

	Subjects = subjects;

}

		void print() override

		{

			//Person::print();

			cout << endl << "Ученая степень: " << AcademicDegree << endl <<

				"Предмет: " << Subjects << endl;

		}

		void print2()

		{

			Person::print();

			cout << endl << "Ученая степень: " << AcademicDegree << endl <<

				"Предмет: " << Subjects << endl;

		}

};