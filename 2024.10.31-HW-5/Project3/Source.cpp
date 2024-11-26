#include <iostream>

int main(int argc, char* argv[])
{
	int a[100] = { 0 };
	int b[100] = { 0 };
	int c[100] = { 0 };
	int n = 0;
	int k = 0;
	int l = 0;

	std::cin >> n;

	for (int i = 0; i < n; ++i) {
		std::cin >> *(a + i);
	}

	for (int i = 0; i < n; ++i) {
		if (*(a + i) % 2 == 1)
		{
			*(b + i) = *(a + i); ++k;
		}
		else
		{
			*(c + i) = *(a + i); ++l;
		}
	}

	for (int i = 0; i < n; ++i) {
		if (*(b + i) != 0)
		{
			std::cout << *(b + i) << ' ';
		}
	}

	for (int i = 0; i < n; ++i) {
		if (*(c + i) != 0)
		{
			std::cout << *(c + i) << ' ';
		}
	}

	if (k > l) {
		std::cout << "NO";
	}
	else {
		std::cout << "YES";
	}
	return 0;
}