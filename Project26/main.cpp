#include "Includes.h"
#include "Book.h"
#include "Deserialism.h"
#include "Serealism.h"

Book CreateBk();

void main() {
	vector<Book> books;
	string temp;
	cout << "create ?\n"; cin >> temp;
	if (temp == "yes")
	{
		books.push_back(CreateBk());

	}
	Deserialism des(books);
	Serealsim ser(books);



}