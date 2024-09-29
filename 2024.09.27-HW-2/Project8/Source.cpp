#include <iostream>
int main(int argc, char* argv[])
{
int N = 0;
int M = 0;
scanf_s("%d", &N);
scanf_s("%d", &M);
if (N == 1 || M == 1)
{
    printf("%d", (N * M) * 4);
}
else
{
    int res = (M + 2) * N + M * (N + 2);
	if (N % 2 == 1 && M % 2 == 1)
	{
		res -= 2;
	}
	printf("%d", res);
	}
return EXIT_SUCCESS;
}