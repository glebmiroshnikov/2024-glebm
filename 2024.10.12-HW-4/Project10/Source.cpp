#include <cstdio>

int main(int argc, char* argv[])
{
	int a = 0;
	int b = 0;
	int n = 0;
	int c = 0;
	int d = 0;

	scanf_s("%d %d %d %d %d",&n, &a, &b, &c, &d);

	int massiv[1000] = { 0 };
	for (int i = 0; i < n; ++i)
	{
		massiv[i] = i + 1;
	}
	for (int i = a - 1,j = b - 1; i < j; ++i, --j)
	{
		int f = massiv[i];
		massiv[i] = massiv[j];
		massiv[j] = f;
	}
	for (int i = c - 1, j = d - 1; i < j; ++i, --j)
	{
		int f = massiv[i];
		massiv[i] = massiv[j];
		massiv[j] = f;
	}
	for (int i = 0; i < n; ++i)
	{
		printf("%d ", massiv[i]);
	}

	return 0;
}