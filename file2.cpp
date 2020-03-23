#include "file.h"
#include <string>

Person::Person() {		
	name = "Леонид";
	surname = "Агапов";
	year = 2001;
}

Person::Person(string _name, string _surname, int _year) {	//конструктор с параметрами
	name = _name;
	surname = _surname;
	year = _year;
}

Person::Person(const Person &student) {				//конструктор копирования
	name = student.name;
	surname = student.surname;
	year = student.year;
}

void Person::print() {						//вывод инфомации на экран
	cout << name << " | " << surname << " | " << year << "\n\n";
}

//сеттеры
void Person::SetName(string aname) {
    name = aname;
}

void Person::SetSurname(string asurname) {
    surname = asurname;
}

void Person::SetYear(int ayear) {				//ввод года рождения с проверкой на правильность введенных данных
	if (ayear < 0) {
		year = 0;
	}else{
		year = ayear;
	}
}

//геттеры
string Person::GetName() { return name; }
string Person::GetSurname() { return surname; }
int Person::GetYear() { return year; }
