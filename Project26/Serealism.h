#pragma once
#include "Includes.h"
#include "Book.h"
class Serealsim
{
public:
	Serealsim(vector<Book> books)
	{
		ofstream outf("Booking.csv");
		outf << "FIO;Book;Year;\n";
		for (auto& i : books)
		{
			outf << i.FIO<<';';
			outf << i.NameBook << ';';
			outf << i.Year << ';';
			outf << "\n";
		}
		outf.close();
	}

	~Serealsim()
	{
	}

private:

};
