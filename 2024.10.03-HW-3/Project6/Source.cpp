#include <iostream>
int main(int argc, char* argv[])
{
	int a = 0;
	int b = 0;

	scanf_s("%d %d", &a, &b);

	int tempa = a;
	int tempb = b;
	while (tempb != 0)
	{
		int k = tempa % tempb;
		tempa = tempb;
		tempb = k;
	}
	int gcd = tempa;
	int lcm = (a * b) / gcd;
	printf("%d", lcm);

	return EXIT_SUCCESS;
}