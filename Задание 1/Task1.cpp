#include <iostream>
#include <vector>

using namespace std;

int countWays(vector<int> array)
{
	int count = 0;

	for (int i = 0; i < array.size(); i++)
	{
		count += array[i];
	}

	return count;
}

int main()
{
	setlocale(LC_ALL, "RU");
	vector<vector<int>> matrix  //Задаем матрицу смежности,
	{							//указанную в задании
		{0, 1, 0, 1, 0, 0},
		{1, 0, 0, 1, 0, 1},
		{0, 0, 0, 1, 1, 0},
		{1, 1, 1, 0, 1, 1},
		{0, 0, 1, 1, 0, 0},
		{0, 1, 0, 1, 0, 0}
	};

	//Из рисунка я заметил, что города A, G должны
	//иметь пути с городами, у которых количество дорог равно 2 и 5,
	//а само количество дорог должно быть равно 2

	for (int i = 0; i < matrix.size(); i++)
	{
		int countOfWays = 0; //Количество дорог

		for (int j = 0; j < matrix[0].size(); j++)
		{
			countOfWays += matrix[i][j];
		}

		if (countOfWays == 2) //Если количество дорог 2, то продолжаем искать, иначе пропускаем этот насел. пункт
		{
			//Далее я хочу найти те две деревни, и если их количество дорог равно 5 и 2,
			//то это те деревушки, которые нужно найти в задании.
			vector<int> villages;
			
			for (int j = 0; j < matrix[0].size(); j++)
			{
				if (matrix[i][j] == 1)
				{
					villages.push_back(j);
				}
			}

			//Теперь проверим, правильное ли количество путей у найденных деревень
			//Для этого я написал небольшую функцию

			if (countWays(matrix[villages[0]]) == 2 && countWays(matrix[villages[1]]) == 5
				|| countWays(matrix[villages[0]]) == 5 && countWays(matrix[villages[1]]) == 2)
			{
				cout << "Деревня с номером " << i + 1 << endl;
			}
		}
	}

	return 0;
}