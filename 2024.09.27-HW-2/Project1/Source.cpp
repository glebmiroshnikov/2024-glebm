#include<iostream>
int main(int argc, char* argv[])
{
int X1 = 0, Y1 = 0;
int X2 = 0, Y2 = 0;
scanf_s("%d %d", &X1, &Y1);
scanf_s("%d %d", &X2, &Y2);
if(X1 == X2 || Y1 == Y2 || abs(X2 - X1) == abs(Y2 - Y1))
{
   printf("YES");
}
else
{
   printf("NO");
}
return EXIT_SUCCESS;
}