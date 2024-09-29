#include <iostream>
#include <cmath>

int main(int argc, char* argv[])
{
int k = 0;
int n = 0;
int m = 0;
scanf_s("%d %d %d",&n,&m,&k);
if (n <= k)
{
    printf("%d", 2 * m);
}
else if (n * 2 % k == 0)
{
	printf("%d", m * (n * 2 / k));
}
else
{
	printf("%d", m * (1 + (n * 2 / k)));
}
return EXIT_SUCCESS;
}