#include<cstdio>

int main(int argc, char* argv[])
{
	int n = 0;
	int massiv[1001] = { 0 };
	int k = 0;
	int l = 0;
	int r = 0;

	scanf_s("%d", &n);

	for (int i = 1; i <= n; ++i)
	{
		scanf_s("%d", &massiv[i]);
	}
	{
		scanf_s("%d", &l);
	}
	{
		scanf_s("%d", &r);
	}
	k = l;
	for (int i = l + 1; i <= r; ++i)
	{
		if (massiv[i] > massiv[k])
		{
			k = i;
		}
	}
	printf("%d %d", massiv[k], k);
	return 0;
}