#pragma once
#include <iostream>
#include <string>
using namespace std;

 class Person 
 {

private:

	string FirstName;

	string SecondName;

protected: 
	Person(string firstName, string secondName)

{

	FirstName = firstName;

	SecondName = secondName;

}

public:

	virtual void print()

	{

		cout << endl << "Имя: " << FirstName << endl <<

			"Фамилия: " << SecondName << endl;

	}

 };