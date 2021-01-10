#include <iostream>

#include "Person.h"

#include "Student.h"

#include "Teacher.h"

#include "Lecturer.h"
#include <string>
using namespace std;

void main()

{
	setlocale(LC_ALL, "RUS");
	Student student(

		"Константин",

		"Красиков",

		"АП-927",

		2);

	Teacher teacher(

		"Евгений",

		"Крыжовников",

		"Доктор",

		"Физика");

	Lecturer lecturer(

		"Василий",

		"Петров",

		"Профессор",

		"Физика",

		"АП-926, АП-927");

	student.print();

	teacher.print();

	lecturer.print();

	teacher = lecturer; //Связывание teacher с типом Lecturer, который имеет объект lecturer

	cout << "Динамическое связывание";

	teacher.print(); //Вызывается Lecturer.print

	cout << "Статическое связывание";

	teacher.print2(); //Вызывается Teacher.print2
	system("pause");
}