#include <iostream>

int main()
{
	for (int numar = 0; numar <= 5; numar++)
	{
		if (numar == 3)
		{
			continue;
		}

		std::cout << numar << std::endl;
	}
	system("pause");
}