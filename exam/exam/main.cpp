#include <iostream>
#include "Person.h"
#include "Student.h"
#include "Teacher.h"
#include "Lecturer.h"
#include <string>
using namespace std;
int main()
{
    setlocale(LC_ALL, "RUS");
    Student student("Дмитрий", "Изгагин", "Константинович", "АП-927");
    Teacher teacher("Лжедмитрий", "Неизгагин", "Викторович", "Программирование");
    Lecturer lecturer("Владимир", "Уткин", "Владимирович", "Физика", "АП-926, АП-927");
    cout << "------Студент------" << endl;
    student.print();
    cout << "------Учитель------" << endl;
    teacher.print();
    cout << "------Лектор------" << endl;
    lecturer.print();
    teacher = lecturer;
    cout << "------Динамическое связывание------"<< endl;
    teacher.print();
    return 0;
}
