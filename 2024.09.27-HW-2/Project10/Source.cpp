#include <iostream>
int main(int argc, char* argv[])
{
int N = 0;
scanf_s("%d", &N);
int B = 0;
int mod = N % 5;
switch (mod)
{
case 0:
{
    printf("%d %d", N / 5,B);
	break;
}
case 1:
{
	printf("%d %d", (N / 5) - 1, (N - 5 * ((N / 5) - 1)) / 3);
	break;
}
case 2:
{
	printf("%d %d", (N / 5) - 2, (N - 5 * ((N / 5) - 2)) / 3);
	break;
}
case 3:
{
	printf("%d %d", N / 5, (N - 5 * (N / 5)) / 3);
	break;
}
case 4:
{
	printf("%d %d", (N / 5) - 1, (N - 5 * ((N / 5) - 1)) / 3);
	break;
}
}
return EXIT_SUCCESS;
}