#include <iostream>

int main(int argc, char* argv[])
{
	int G = 0;
	int L = 0;
	scanf_s("%d", &G);
	scanf_s("%d", &L);
	int N = G + L - 1;
	int notshutbyG = N - G;
	int notshutbyL = N - L;
	printf("����� ����� �� ��������������� �����: %d.\n", notshutbyG);
	printf("���� ����� �� ������������� �����: %d.\n", notshutbyL);
	return EXIT_SUCCESS;
}