#include<stdio.h>


int temp(int fahr);
	

int main()
{
	int fahr;
	
	printf("Add your number: ");	
	scanf("%d", &fahr);
	printf("otvet = %d\n", temp(fahr));
	temp(fahr);
}
int temp(int fahr)
{	

	return (5 * (fahr - 32) / 9);

}
