#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	setlocale(0, "RUS");

	string str;
	cout << "Введите строку" << endl << endl;
	getline(cin, str);
	
	
	
	for (int i = 0; i < str.size(); i++) 
	{
		if (str[i] == ' ') str.erase(i);
		else break;
	} // Убираем пробелы из начала строки


	for (int i = str.size() -1 ; i >= 0; i--)
	{
		if (str[i] == ' ') str.erase(i);
		else break;
	} //Убираем пробелы из конца строки
	
	
	int b = str.find(' '); // копируем первое слово
	string str1;	
	for (int i = 0; i <= b; i++)
	{
		str1 += str[i];
	}
	str.erase(0, b + 1);



	b = str.rfind(' '); // копируем последнее слово
	string str2;
	for (int i = b; i < str.size(); i++)
	{
		str2 += str[i];		
	}
	str.erase(b, str.size());
	
	str = str2 + " " + str + " " + str1; //меняем местами и соеденяем с серединой строки

	cout << str;
	
	
	
		
		
}


