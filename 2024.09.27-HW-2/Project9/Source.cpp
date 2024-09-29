#include <iostream>
int main(int argc, char* argv[])
{
int K = 0;
int W = 0;
int a1 = 0, b1 = 0, a2 = 0, b2 = 0, a3 = 0, b3 = 0;
scanf_s("%d %d\n", &K, &W);
scanf_s("%d %d %d %d %d %d", &a1, &b1, &a2, &b2, &a3, &b3);
if ((a1 >= W && b1 >= K) || (a2 >= W && b2 >= K) || (a3 >= W && b3 >= K) ||
	(a1 + a2 >= W && b1 + b2 >= K) || (a1 + a3 >= W && b1 + b3 >= K) ||
	(a3 + a2 >= W && b3 + b2 >= K) || (a1 + a2 + a3 >= W && b1 + b2 + b3 >= K))
{
    printf("YES");
}
else
{
	printf("NO");
}
	return EXIT_SUCCESS;
}


	