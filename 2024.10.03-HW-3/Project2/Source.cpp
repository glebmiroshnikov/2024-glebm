#include <iostream>
int main(int argc, char* argv[])
{
	int k = 0;
	scanf_s("%d", &k);
	for (int i = 0; i < k; ++i)
	{
		int m = 0;
		long long n = 0;
		scanf_s("%d %lld", &m, &n);
		long long result = (n + 239) * (n + 366) / 2;
		long long d = 19 * m + result;
		printf("%lld\n",d);
	}
	return EXIT_SUCCESS;
}