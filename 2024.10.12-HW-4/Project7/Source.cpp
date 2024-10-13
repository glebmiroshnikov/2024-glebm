#include<cstdio>

int main(int argc, char* argv[])
{
    int n = 0;
    int massiv[1000] = { 0 };

    scanf_s("%d", &n);

    for (int i = 0; i < n; ++i)
    {
        scanf_s("%d", &massiv[i]);
    }
    for (int i = n - 1; i >= 0; --i)
    {
        printf("%d ", massiv[i]);
    }
    return 0;
}