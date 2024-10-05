#include <iostream>
int main(int argc, char* argv[])
{
	int n = 0;
	scanf_s("%d", &n);
	int bus_height =437 ;
	int height = 0;
	int k = 0;
	for (int i = 1; i <= n && k == 0; ++i)
	{
		scanf_s("%d", &height);
		if (height <= bus_height)
		{
			k = i;
		}
	}
	if (k!=0)
	{
		printf("Crash %d\n", k);
	}
	else
	{
		printf("No crash");
	}
	return EXIT_SUCCESS;
}