#include<iostream>

int main(int argc, char* argv[])
{
	int S = 0;
	scanf_s("%d", &S);
	int a = S / 6;
	int b = S / 6;
	int с = (2 * S) / 3;
	printf("Катя: %d.\n", с);
	printf("Петя: %d.\n", b);
	printf("Серёжа: %d.\n", a);
	return EXIT_SUCCESS;
}

