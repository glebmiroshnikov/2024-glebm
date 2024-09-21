#include<iostream>

int main(int argv, char* argc[]) 
{
	int a = 0;
	scanf_s("%d", &a);
	int next = a + 1;
	int prev = a - 1;
	printf("The next number for the number %d is %d.\n",a,next);
	printf("The previous number for the number %d is %d.\n",a,prev);
	return EXIT_SUCCESS;
}