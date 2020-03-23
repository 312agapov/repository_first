#ifndef LIBR_H
#define LIBR_H

#include <iostream>
#include <windows.h>
#include <string>
#include <cstdlib>
#include <conio.h>

using namespace std;

class Person {
private:
	string name, surname;
	int year;
public:
	Person();
	Person(string _name, string _surname, int _year);
	Person(const Person &student);
	void print();
	void SetName(string aname);
	string GetName();
	void SetSurname(string asurname);
	string GetSurname();
	void SetYear(int ayear);
	int GetYear();
};

#endif
