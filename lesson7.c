#include<stdio.h>

static int number = 500;


int main()
{
	extern int number;
	printf("%d\n", number);
	return 0;
	extern int number2;
	printf("number2 = %d\n", number2);


}
