#include<iostream>
int main(int argc, char* argv[])
{
int x = 0, y = 0;
scanf_s("%d %d", &x, &y);
if (x == 1 && y == 1)
{
   printf("0");
   return EXIT_SUCCESS;
}
else
{
bool playerwin1 = true;
if (x > 1 && (y == 1 || x - 1 == 1))
{
   playerwin1 = false;
}
if (y > 1 && (x == 1 || y - 1 == 1))
{
   playerwin1 = false;
}
if (playerwin1)
{
   printf("1");
}
else
{
   printf("2");
}
}
return EXIT_SUCCESS;
}














