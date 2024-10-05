#include <iostream>
int main(int argc, char* argv[])
{
	int n = 0;
	scanf_s("%d", &n);
	int gerbs = 0;
	int reshka = 0;
	int coin = 0;
	int i = 0;
    input_loop:
	if (i < n)
	{
		scanf_s("%d", &coin);
		if(coin==0)
		{
			gerbs++;
		}
		if (coin == 1)
		{
			reshka++;
		}
		++i;
		goto input_loop;
	}
	int minimal_flips = (gerbs < reshka) ? gerbs : reshka;
	printf("%d", minimal_flips);
	return EXIT_SUCCESS;
}