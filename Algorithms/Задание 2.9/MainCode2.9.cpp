
//Задача 2.9
//
//Условие: Построить пустой куб из звездочек.

#include <iostream>

int main()
{
    int colvoZvezd = 10;

	for (int i = 0; i < colvoZvezd; i++)
	{
		std::cout << '*';
	}
	std::cout << std::endl;

	for (int i = 0; i < colvoZvezd - 2; i++)
	{
		std::cout << '*';
		for (int j = 0; j < colvoZvezd - 2; j++)
		{
			std::cout << ' ';
		}
		std::cout << '*' << std::endl;
	}

	for (int i = 0; i < colvoZvezd; i++)
	{
		std::cout << '*';
	}
	std::cout << std::endl;
}