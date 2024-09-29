#include<iostream>
int main(int argc, char* argv[])
{
int A1 = 0, B1 = 0, C1 = 0;
int A2 = 0, B2 = 0, C2 = 0;
scanf_s("%d %d %d\n", &A1, &B1, &C1);
scanf_s("%d %d %d", &A2, &B2, &C2);
int sort;
if (A1 > B1)
{
	sort = A1;
	A1 = B1;
	B1 = sort;
}
if (A1 > C1)
{
	sort = A1;
	A1 = C1;
	C1 = sort;
}
if(B1>C1)
{
	sort = B1;
	B1 = C1;
	C1 = sort;
}
if (A2 > B2)
{
	sort = A2;
	A2 = B2;
	B2 = sort;
}
if (A2 > C2)
{
	sort = A2;
	A2 = C2;
	C2 = sort;
}
if (B2 > C2)
{
	sort = B2;
	B2 = C2;
	C2 = sort;
}
if (A1 == A2 && B1 == B2 && C1 == C2)
{
	printf("Boxes are equal");
}
else if (A1 < A2 && B1 < B2 && C1 < C2)
{
	printf("The first box is smaller than the second one");
}
else if (A2 < A1 && B2 < B1 && C2 < C1)
{
	printf("The first box is larger than the second one");
}
else
{
	printf("Boxes are incomparable");
}
return EXIT_SUCCESS;
}