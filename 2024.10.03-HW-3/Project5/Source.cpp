#include <iostream>
int main(int argc, char* argv[])
{
	int n = 0;
	scanf_s("%d", &n);
	int a = 0;
	int res = 0;
	int b = n;
	for (n; n > 0; --n)
	{
		for (int i = b; i > 0; --i)
		{
			scanf_s("%d\n", &a);
			if (a == 1)
			{
				++res;
			}
		}
	}
	printf("%d", res / 2);
	return EXIT_SUCCESS;
}