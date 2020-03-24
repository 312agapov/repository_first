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
	while(true){					//бесконечный цикл для удобства работы
		cout << "Нажмите 1 чтобы ввести данные студента\n";
		cout << "Нажмите 2 чтобы посмотреть данные о студенте\n";
		cout << "Нажмите 3 чтобы скопировать\n";
		cout << "Нажмите 4 чтобы выйти\n\n";
		cin >> a;

		if (a == 1) {				//ввод информациии о студенте
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

		if (a == 2) {				//вывод информации об 1-ом студенте
            		cout << "student1" << endl;
			student.print();
		}

		if (a == 3) {				//копирование данных 1-го студента 
            		Person student2 = student;
           		cout << "Студент 1\n";
          		student.print();
           		cout << "Студент 2\n";
           		student2.print();
		}

		if (a == 4) {				//выход из программы
			return 0;
		}

	}
	return 0;
}
