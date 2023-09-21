#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RU");

	string str = "88888888888888888888888888888888888888888888888888888888888888888888";  //Здесь 68 восьмерок, лично считал

	while (str.find("888") != -1 || str.find("222") != -1)  //Проверяем есть ли построки в виде 888 или 222 в строке
	{
		if (str.find("222") != -1)
		{
			int start = str.find("222"); //находим позицию старта подстроки
			str.replace(start, 3, "8");
		}
		else 
		{
			int start = str.find("888"); //находим позицию старта подстроки

			if (start != -1)
			{
				str.replace(start, 3, "2");
			}
		}
	}

	cout << str;
	
	return 0;
}