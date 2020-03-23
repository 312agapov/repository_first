#include "file.h"
#include <string>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int a = 0;
	int year;
	string name;
	string surname;


	Person student;
	while(true){
		cout << "Нажмите 1 чтобы ввести данные студента\n";
		cout << "Нажмите 2 чтобы посмотреть данные о студенте\n";
		cout << "Нажмите 3 чтобы скопировать\n";
		cout << "Нажмите 4 чтобы выйти\n\n";
		cin >> a;

		if (a == 1) {
			cout << "Введите имя студента: ";
			cin >> name;
			student.SetName(name);
			cout << "Введите фамилию студента: ";
			cin >> surname;
			student.SetSurname(surname);
			cout << "Введите год рождения:";
			cin >> year;
			student.SetYear(year);
		}

		if (a == 2) {
            cout << "student1" << endl;
			student.print();
			Person student2;
			cout << "student2" << endl;
			student2.print();
			Person student3;
			cout << "student3" << endl;
            student3.print();
		}

		if (a == 3) {
            //cout << "Имя студента: " << student.GetName() << endl;
			//cout << "Фамилия студента: " << student.GetSurname() << endl;
			//cout << "Год рождения: " << student.GetYear() << endl << endl;
			Person student3 = student;
		}

		if (a == 4) {
			return 0;
		}

	}
	return 0;
}
