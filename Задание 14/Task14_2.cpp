#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RU");
	
	//88x4y(9) + 7x44y(11)

	for (int x = 0; x < 9; x++)  //Перебираем все числа 9-ричной системы, в 11-ричной нет смысла, 
	{	                          //т.к. ее числа > 8 нельзя подставить в девятиричную систему счисления
		for (int y = 0; y < 9; y++)
		{
			int value1 = y * 1 + 4 * pow(9, 1) + x * pow(9, 2) + 8 * pow(9, 3) + 8 * pow(9, 4);
			int value2 = y * 1 + 4 * pow(11, 1) + 4 * pow(11, 2) + x * pow(11, 3) + 7 * pow(11, 4);
			if ((value1 + value2) % 61 == 0)
			{
				printf("x: %d, y: %d, value1 = %d, value2 = %d, result = %d\n", x, y, value1, value2, (value1 + value2) / 61);
			}
		}
	}

	return 0;
}