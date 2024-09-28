#include<iostream>
#include<cmath>
int main(int argc, char* argv[])
{
int x1=0, y1=0, r1=0;
int x2=0, y2=0, r2=0;
scanf_s("%d %d %d\n", &x1, &y1, &r1);
scanf_s("%d %d %d", &x2, &y2, &r2);
double d=sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
if((d<r1+r2 && d>abs(r1-r2))||(d==r1+r2 || d==abs(r1+r2)))
{ 
   printf("Yes");
}
else
{
   printf("NO");
}
return EXIT_SUCCESS;
}