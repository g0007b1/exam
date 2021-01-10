#pragma once
#include <iostream>
#include <string>
#include "Teacher.h"

using namespace std;

class Lecturer : public Teacher

{

private: string Groups;

public: Lecturer(string firstName, string secondName, string academicDegree, string subjects, string groups) :

	Teacher(firstName, secondName, academicDegree, subjects)

{

	Groups = groups;

}

public:

	virtual void print()override

	{

		cout << endl << "Список групп: " << Groups << endl;

	}

	void print2()

	{

		cout << endl << "Список групп: " << Groups << endl;

	}

};