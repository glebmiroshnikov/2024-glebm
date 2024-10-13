#include <cstdio>

int main(int argc, char* argv[])
{
	int n = 0;
	int m = 0;

	scanf_s("%d %d", &n, &m);

	int tempn = n;
	int tempm = m;
	while (tempm != 0)
	{
		int k = tempm;
		tempm = tempn % tempm;
		tempn = k;
	}
	if (m % n == 0)
	{
		printf("%d", 1);
	}
	else
	{
		printf("%d", n / tempn);
	}

	return 0;
}