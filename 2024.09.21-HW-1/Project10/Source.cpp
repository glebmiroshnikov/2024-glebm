#include <iostream>

int main(int argc, char* argv[])
{
    int H = 0;
    int A = 0;
    int B = 0;
    int day = 0;
    scanf_s("%d", &H);
    scanf_s("%d", &A);
    scanf_s("%d", &B);
    H = H + (((A - B) - H % (A - B)) % (A - B));
    H = (H - A) * ((H / A) - ((H - A) / A));
    day++;
    H = H + (((A - B) - H % (A - B)) % (A - B));
    day += H / (A - B);
    printf("%d", day);
    return EXIT_SUCCESS;
}