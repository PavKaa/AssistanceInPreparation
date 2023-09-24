#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RU");

	//Простой перебор, заменяя следование по закону де Моргана

	for (int A = 0; A < 50; A++)
	{
		bool flag = true;
		for (int x = 0; x < 50; x++)
		{
			if (((!((x & 28) != 0 || (x & 45) != 0)) || (!((x & 17) == 0) || (x & A) != 0)) == 0)
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