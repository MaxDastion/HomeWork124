#pragma once
#include"Includes.h"
#include"Book.h"
class Deserialism
{
public:
	 Deserialism(vector<Book>& books) {
		 ifstream in("Boox.csv");
		 string str; int temp = 0;
		 while (getline(in,str))
		 {
			 Book Bk;
			 for (size_t i = 0; i < str.size(); i++)
			 {
				 if (str[i] == ';') {
					 temp++;
					 i++;
				 }
				 switch (temp % 3)
				 {
				 case 0: Bk.FIO += str[i]; break;
				 case 1: Bk.NameBook += str[i]; break;
				 case 2: Bk.Year += str[i]; break;


				 default:
					 break;
				 }
			 }
			 books.push_back(Bk);
		 }
		 in.close();
}
private:

};
