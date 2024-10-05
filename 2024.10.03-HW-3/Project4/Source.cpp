#include <iostream>
#include <cmath>
int main(int argc, char* argv[])
{
	int n = 0;
	int v = 0;
	int s = 0;
	scanf_s("%d", &n);
	int i = 0;
	int max_v = 0;
	int max_i = 0;
	for (n; n > 0; --n)
	{
		++i;
		scanf_s("%d\n", &v);
		scanf_s("%d", &s);
		if (s == 1 && v > max_v)
		{
			max_v = v;
			max_i = i;
		}
	}
	if (max_v != 0)
	{
		printf("%d", max_i);
	}
	else
	{
		printf("-1");
	}
	return EXIT_SUCCESS;
}