#include <iostream>

int main(int argc, char* argv[])
{
	int a = 0;
	scanf_s("%d", &a);
	//Вы просили без if ,поэтому проверку,что число именно трехзначное натуральное, я написать не смогу
	int sum = 0;
	sum += a / 100;
	sum += (a / 10) % 10;
	sum += a % 10;
	printf("Сумма цифр заданного числа равна: %d\n", sum);
	return EXIT_SUCCESS;
}