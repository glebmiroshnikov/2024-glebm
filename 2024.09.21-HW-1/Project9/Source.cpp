#include <iostream>

int main(int argc, char* argv[])
{
	printf("������� ��������: ");
	int V = 0;
	int T = 0;
	scanf_s("%d", &V);
	printf("������� �����: ");
	scanf_s("%d", &T);
	int S = 109;
	int S_Progress = V * T - (V * T / 109 * 109);
	printf("������ ����������� ��: %d", S_Progress + 1);
	return EXIT_SUCCESS;
}