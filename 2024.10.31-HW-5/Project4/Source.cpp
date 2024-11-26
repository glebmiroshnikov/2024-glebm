#include <iostream>
#include <cstdlib>

int main(int argc, char* argv[])
{
    int n = 0;
    int max = 0;
    int min = 0;
    int s = 0;
    int p = 1;
    int inmax = 0;
    int inmin = 0;

    std::cin >> n;

    int* a = new int[n];

    for (int i = 0; i < n; ++i)
    {
        std::cin >> *(a + i);
    }

    for (int i = 0; i < n; ++i)
    {
        if (*(a + i) > 0)
        {
            s += *(a + i);
        }
    }
    std::cout << s << " ";

    max = *(a + 0);
    min = *(a + 0);

    for (int i = 1; i < n; ++i)
    {
        if (max < *(a + i))
        {
            max = *(a + i);
            inmax = i;
        }
    }

    for (int i = 1; i < n; ++i)
    {

        if (min > *(a + i))
        {
            min = *(a + i);
            inmin = i;
        }
    }


    if (inmin > inmax)
    {
        for (int i = inmax + 1; i < inmin; ++i)
        {
            p *= *(a + i);
        }
    }

    if (inmin < inmax)
    {
        for (int i = inmin + 1; i < inmax; ++i)
        {
            p *= *(a + i);
        }
    }
    std::cout << p;

    delete[] a;
    return 0;
}