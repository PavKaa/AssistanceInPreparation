#include <iostream>
#include <map>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RU");

	int value = 209; //210 значение, начина с нуля
	map<int, char> dictionary;  //словарь для соотнесения значений и букв
	dictionary[0] = 'A';
	dictionary[1] = 'O';
	dictionary[2] = 'У';

	while (value > 0)
	{
		cout << dictionary[value % 3];
		value /= 3;  //Вывод: 	УАУОУ
	}
	
	return 0;
}