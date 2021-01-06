#include<stdio.h>
#include<string.h>
int main(void)
{
	int massiv[2][3] = {{'A','B','C'},{10,20,30}};
	printf("Element [0][0] = %c\n",massiv[0][0]);
	printf("Element [1][2] = %d\n",massiv[1][1]);

	
	
	massiv[1][0] = 100;
	massiv[1][1] = 200;
	massiv[1][2] = 300;
	printf("\n");
	printf("Element [1][0] = %d\n",massiv[1][0]);
	printf("Element [1][1] = %d\n",massiv[1][1]);
	printf("Element [1][2] = %d\n",massiv[1][2]);



}
