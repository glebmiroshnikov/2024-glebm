#include <iostream>
#include <cstdlib>

int main(int argc, char* argv[])
{
    int mx = 0;
    int sum = 0;

    int n = 0;
    std::cin >> n;
    int* a = new int[n];

    for (int i = 0; i < n; ++i)
    {
        std::cin >> *(a + i);
    }

    for (int i = n - 1; i >= 0; --i)
    {
        mx = ((mx) > (*(a + i)) ? (mx) : (*(a + i)));
        sum += mx;
    }

    std::cout << sum;

    delete[] a;
    return 0;
}