#include <cstdio>

int main(int argc, char* argv[])
{
	int n = 0;

	scanf_s("%d", &n);

	int a = 0;
	int res = 0;
	int res_max = res;
	for (n; n > 0; --n)
	{
		scanf_s("%d", &a);
		if (a > 0)
		{
			++res;
			if (res > res_max)
			{
				res_max = res;
			}
		}
		else
		{
			res = 0;
		}
	}
	printf("%d", res_max);

	return 0;
}