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
		cout << "Íàæìèòå 2 ÷òîáû ïîñìîòðåòü äàííûå î ñòóäåíòå\n";
		cout << "Íàæìèòå 3 ÷òîáû ñêîïèðîâàòü\n";
		cout << "Íàæìèòå 4 ÷òîáû âûéòè\n\n";
		cin >> a;

		if (a == 1) {
			cout << "Ââåäèòå èìÿ ñòóäåíòà: ";
			cin >> name;
			student.SetName(name);
			cout << "Ââåäèòå ôàìèëèþ ñòóäåíòà: ";
			cin >> surname;
			student.SetSurname(surname);
			cout << "Ââåäèòå ãîä ðîæäåíèÿ:";
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
            //cout << "Èìÿ ñòóäåíòà: " << student.GetName() << endl;
			//cout << "Ôàìèëèÿ ñòóäåíòà: " << student.GetSurname() << endl;
			//cout << "Ãîä ðîæäåíèÿ: " << student.GetYear() << endl << endl;
			Person student3 = student;
		}

		if (a == 4) {
			return 0;
		}

	}
	return 0;
}
