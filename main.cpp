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
		cout << "������� 1 ����� ������ ������ ��������\n";
		cout << "������� 2 ����� ���������� ������ � ��������\n";
		cout << "������� 3 ����� �����������\n";
		cout << "������� 4 ����� �����\n\n";
		cin >> a;

		if (a == 1) {
			cout << "������� ��� ��������: ";
			cin >> name;
			student.SetName(name);
			cout << "������� ������� ��������: ";
			cin >> surname;
			student.SetSurname(surname);
			cout << "������� ��� ��������:";
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
            //cout << "��� ��������: " << student.GetName() << endl;
			//cout << "������� ��������: " << student.GetSurname() << endl;
			//cout << "��� ��������: " << student.GetYear() << endl << endl;
			Person student3 = student;
		}

		if (a == 4) {
			return 0;
		}

	}
	return 0;
}
