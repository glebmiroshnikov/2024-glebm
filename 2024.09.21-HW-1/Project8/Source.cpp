#include <iostream>

int main(int argc, char* argv[])
{
	int a = 0;
	scanf_s("%d", &a);
	//�� ������� ��� if ,������� ��������,��� ����� ������ ����������� �����������, � �������� �� �����
	int sum = 0;
	sum += a / 100;
	sum += (a / 10) % 10;
	sum += a % 10;
	printf("����� ���� ��������� ����� �����: %d\n", sum);
	return EXIT_SUCCESS;
}