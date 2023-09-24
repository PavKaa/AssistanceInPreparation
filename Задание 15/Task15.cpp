#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RU");

	//Простой перебор, заменяя следование по закону де Моргана

	for (int A = 0; A < 32; A++)
	{
		bool flag = true;
		for (int x = 0; x < 32; x++)
		{
			if ((!((x & 29) != 0) || ((!((x & 17) == 0)) || ((x & A) != 0))) == 0)
			{
				flag = false;
			}
		}

		if (flag)
		{
			cout << " A = " << A << endl;
		}
	}

	return 0;
}