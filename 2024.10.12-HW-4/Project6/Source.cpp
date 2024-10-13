#include <cstdio>
#include <cmath>

int main(int argc,char* argv[])
{
	int a[100] = { 0 };
	int b[100] = { 0 };
	int n = 0;
	int k = 0;
	int s[100] = { 0 };
	int max=0;

	scanf_s("%d", &n);

	for (int i = 0; i < n; i++)
	{
		scanf_s("%d", &a[i]);
	}
	for (int i = 0; i < n; i++)
	{
		scanf_s("%d", &b[i]);
	}
	s[0] = a[0] * b[0];
	max = s[0];
	k = 1;
	for (int i = 1; i < n; i++)
	{
		s[i] = a[i] * b[i];
		if (s[i] > max)
		{
			max = s[i];
			k = i + 1;
		}
	}
	printf("%d", k);
	return 0;
}