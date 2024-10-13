#include <cstdio>

int main(int argc, char* argv[])
{
    int massiv[1000] = { 0 };
    int n = 0;
    int x = 0;
    int y = 0;

    scanf_s("%d", &n);
    scanf_s("%d", &massiv[0]);

    x = massiv[0];
    y = massiv[0];


    for (int i = 1; i < n; ++i)
    {
        scanf("%d", &massiv[i]);
        if (massiv[i] > x)
        {
            x = massiv[i];
        }
        else if (massiv[i] < y)
        {
            y = massiv[i];
        }
    }
    for (int i = 0; i < n; ++i)
    {
        if (massiv[i] == x)
        {
            massiv[i] = y;
        }
        printf("%d ", massiv[i]);
    }

    printf("\n");
    return 0;
}