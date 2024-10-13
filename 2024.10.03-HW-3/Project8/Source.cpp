#include <cstdio>

int main(int argc, char* argv[])
{
	int i = 0;
	int j = 0;

	scanf_s("%d %d", &i, &j);

	int	tempi = i;
	int tempj = j;
	while (tempj != 0)
	{
		int k = tempj;
		tempj = tempi % tempj;
		tempi = k;
	}
	int a0 = 1;
	int a1 = 1;
	int a = 0;
	int sum = 1000000000;
	for (int k = 2; k < tempi; ++k)
	{
		a = (a0 + a1) % sum;
		a0 = a1;
		a1 = a;
	}
	printf("%d", a1);

	return 0;
}