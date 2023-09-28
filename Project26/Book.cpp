#include "Book.h"
#include "Includes.h"

Book CreateBk() {

	Book Bk;
	cout << "FIO: "; cin >> Bk.FIO; system("cls");
	cout << "NameBook: "; cin >> Bk.NameBook; system("cls");
	cout << "Year: "; cin >> Bk.Year; system("cls");
	ofstream outf("Boox.csv", ios_base::app);

	outf << Bk.FIO << ';';
	outf << Bk.NameBook << ';';
	outf << Bk.Year << ';';
	outf << '\n';
	return Bk;
}

