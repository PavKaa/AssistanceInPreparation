#include <iostream>

using namespace std;

int main()
{
	//Простой перебор
	for (int i = 0; i < 500; i++)
	{
		int temp = i; //КОпия, чтобы не изменять число
		int sum = 0; //Cумма всех двоичных цифр числа
		int temp2 = temp; //Еще одна опия, чтобы не изменять само число

		while (temp2 > 0)
		{
			sum += temp2 % 2;
			temp2 /= 2;
		}

		if (sum % 2 == 0)
		{
			temp *= 2;
		}
		else
		{
			temp = temp * 2 + 1;
		}

		temp2 = temp; //Повторяем операцию еще раз
		sum = 0;

		while (temp2 > 0)
		{
			sum += temp2 % 2;
			temp2 /= 2;
		}

		if (sum % 2 == 0)
		{
			temp *= 2;
		}
		else 
		{
			temp = temp * 2 + 1;
		}

		cout << "N = " << i << "\tR = " << temp << endl;
	}

	//По выведенным данным находим ответ: 46
	
	return 0;
}