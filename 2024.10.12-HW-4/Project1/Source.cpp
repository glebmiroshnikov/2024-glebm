#include<cstdio>

int main(int argc, char* argv[])
{
    int n = 0;
    int x = 0;
    int massiv[1000] = { 0 };
    int k = 0;

    scanf_s("%d", &n);

    for (int i = 0; i < n; ++i)
    {
        scanf_s("%d", &massiv[i]);
    }
    {
        scanf_s("%d", &x);
    }
    for (int i = 0; i < n; ++i)
    {
        if (massiv[i] == x)
        {
            ++k;
        }
    }
    printf("%d", k);
    return 0;
}