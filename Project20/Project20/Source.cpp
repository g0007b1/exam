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

		"����������",

		"��������",

		"��-927",

		2);

	Teacher teacher(

		"�������",

		"�����������",

		"������",

		"������");

	Lecturer lecturer(

		"�������",

		"������",

		"���������",

		"������",

		"��-926, ��-927");

	student.print();

	teacher.print();

	lecturer.print();

	teacher = lecturer; //���������� teacher � ����� Lecturer, ������� ����� ������ lecturer

	cout << "������������ ����������";

	teacher.print(); //���������� Lecturer.print

	cout << "����������� ����������";

	teacher.print2(); //���������� Teacher.print2
	system("pause");
}