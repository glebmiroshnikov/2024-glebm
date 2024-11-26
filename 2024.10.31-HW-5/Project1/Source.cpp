#include <iostream>

int main(int argc, char* argv[])
{
    int a[100000] = { 0 };
    int n = 0;
    int k = 0;
    int m = 0;

    std::cin >> n;

    for (int i = 0; i < n; ++i)
    {
        std::cin >> *(a + i);
    }

    for (int i = 0; i < n; ++i)
    {
        if (*(a + i) < *(a + m))
        {
            m = i;
        }
    }

    for (int i = m; i < n; ++i)
    {
        std::cout << *(a + i) << ' ';
    }

    for (int i = 0; i < m; ++i)
    {
        std::cout << *(a + i) << ' ';
    }
    return 0;
}