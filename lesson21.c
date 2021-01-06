#include<stdio.h>

int main()
{
	fprintf(stdout,"Repeat script\n");
	char symbol = 'y';
	while(symbol == 'y')
	{
	
	printf("I want repeat\n");
	printf("(y/n)\n");
	scanf("%s", &symbol);
	
	}
	printf("Nadoelo?;)))");   
	
	int number;
	number = 0;
	while(number <=10) 
	{
	for(int i = 0;i <=10;i++)
		fprintf(stdout,"Count[%d]\t%d\n",i,number); 
	}






}
